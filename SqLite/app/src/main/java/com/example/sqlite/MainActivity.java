


import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;
import android.database.Cursor;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;
public class MainActivity extends AppCompatActivity {
    EditText name,contact,dob;
    Button insert,delete,view,update;
    Database db;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        name = (EditText) findViewById(R.id.name);
        contact = (EditText) findViewById(R.id.contact);
        dob = (EditText) findViewById(R.id.dob);
        insert = (Button) findViewById(R.id.insert);
        update = (Button) findViewById(R.id.update);
        view = (Button) findViewById(R.id.view);
        delete = (Button) findViewById(R.id.delete);
        db = new Database(this);
        insert.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String user = name.getText().toString();
                String con = contact.getText().toString();
                String date = dob.getText().toString();
                Boolean check = db.insertData(user,con,date);
                if(check == true){
                    Toast.makeText(MainActivity.this, "Data inserted successfully",
                            Toast.LENGTH_SHORT).show();
                }
                else{
                    Toast.makeText(MainActivity.this, "Data failed to insert",
                            Toast.LENGTH_SHORT).show();
                }
            }
        });
        update.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String user = name.getText().toString();
                String con = contact.getText().toString();
                String date = dob.getText().toString();
                Boolean check = db.updateData(user,con,date);
                if(check == true){
                    Toast.makeText(MainActivity.this, "Data updated successfully",
                            Toast.LENGTH_SHORT).show();
                }
                else{
                    Toast.makeText(MainActivity.this, "Data failed to update",
                            Toast.LENGTH_SHORT).show();
                }
            }
        });
        delete.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String user = name.getText().toString();
                Boolean check = db.deleteData(user);
                if(check == true){
                    Toast.makeText(MainActivity.this, "Data deleted successfully",
                            Toast.LENGTH_SHORT).show();
                }
                else{
                    Toast.makeText(MainActivity.this, "Data failed to delete",
                            Toast.LENGTH_SHORT).show();
                }
            }
        });
        view.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Cursor res = db.getData();
                if(res.getCount() == 0){
                    Toast.makeText(MainActivity.this, "No data", Toast.LENGTH_SHORT).show();
                    return;
                }
                StringBuffer buffer = new StringBuffer();
                while(res.moveToNext()){
                    buffer.append("Name: "+res.getString(0)+"\n");
                    buffer.append("Contact: "+res.getString(1)+"\n");
                    buffer.append("Date of Birth: "+res.getString(2)+"\n\n");
                }
                AlertDialog.Builder builder = new AlertDialog.Builder(MainActivity.this);
                builder.setCancelable(true);
                builder.setTitle("Student Information");
                builder.setMessage(buffer.toString());
                builder.show();
            }
        });
    }
}
