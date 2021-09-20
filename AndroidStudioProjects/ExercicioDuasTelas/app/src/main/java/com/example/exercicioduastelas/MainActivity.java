package com.example.exercicioduastelas;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        nota1 = (EditText) findViewById(R.id.txtNota1);
        nota2 = (EditText) findViewById(R.id.txtNota2);
        btnCalcular = (Button) findViewById(R.id.btnCalcular);
        mediaFinal = (TextView) findViewById(R.id.txtMediaFinal);
        btnCalcular.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v){
                //Variavel n1, recebe o valor nota1 tipo string transformada para real
                Double n1= Double.valueOf(nota1.getText().toString());
                Double n2= Double.valueOf(nota2.getText().toString());
                Double media = (n1 + n2)/2;
                mediaFinal.setText(media.toString());
            }

            public void irParaTela2(View view){
                Intent intent1 = new Intent(getApplicationContext(),Tela2.class);
            }
        });
    }
    public void irParaTela2(View view){
        Intent intent1 = new Intent(getApplicationContext(),Tela2.class);
        startActivity(intent1);
    }
    //Criação de atributos
    private EditText nota1;
    private EditText nota2;
    private Button btnCalcular;
    private TextView mediaFinal;

}