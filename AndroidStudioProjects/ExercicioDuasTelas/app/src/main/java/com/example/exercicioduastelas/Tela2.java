package com.example.exercicioduastelas;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;

public class Tela2 extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_tela2);
    }
    public void irParaTela1(View view){
        Intent intent2 = new Intent(getApplicationContext(),MainActivity.class);
        startActivity(intent2);
    }
}
