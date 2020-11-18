package com.example.nametodolist;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.TextView;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    private ListView mTaskListView;
    private ArrayAdapter<String> mAdapter;
    private ArrayList<String> taskList = new ArrayList<>();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mTaskListView = (ListView) findViewById(R.id.list_todo);

        mAdapter = new ArrayAdapter<String>(this,
                R.layout.todo_item,
                R.id.task_title,
                taskList);

        mTaskListView.setAdapter(mAdapter);


    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.main_menu, menu);
        return super.onCreateOptionsMenu(menu);
    }

    @Override
    public boolean onOptionsItemSelected(@NonNull MenuItem item) {
        switch (item.getItemId()) {
            case R.id.action_add_task:
                final EditText taskEditText = new EditText(this);
                AlertDialog dialog = new AlertDialog.Builder(this)
                        .setTitle("Add a new task ")
                        .setMessage("What do you want to do next ?")
                        .setView(taskEditText)
                        .setPositiveButton(" Add ", new DialogInterface.
                                OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialog, int which) {
                                String task = String.valueOf(taskEditText.getText()
                                );
                                taskList.add(task);
                                mAdapter.notifyDataSetChanged();
                            }
                        })
                        .setNegativeButton(" Cancel ", null)
                        .create();
                dialog.show();
                return true;
            default:
                return super.onOptionsItemSelected(item);
        }
    }

    public void deleteTask(View view) {
        TextView textView = ((View) view.getParent()).findViewById(R.id.task_title);
        String task = String.valueOf(textView.getText());
        removeItem(task);
    }



    private void addItem(String itemText) {
        taskList.add(itemText);
        mAdapter.notifyDataSetChanged();
    }

    private void removeItem(String itemText) {
        taskList.remove(itemText);
        mAdapter.notifyDataSetChanged();
    }

}