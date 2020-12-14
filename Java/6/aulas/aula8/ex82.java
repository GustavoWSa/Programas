    /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas.aula8;
import java.util.Scanner;
import java.util.Calendar;
/**
 *
 * @author gusta
 */
public class ex82 {
    public static class Pessoa{
        private String nome;
        private int idade;
        private float peso;
        
    public String getNome(){
        return nome;
    }
    public void setNome(String nome){
        this.nome=nome;
    }
    public int getIdade(){
        return idade;
    }
    public void setIdade(int idade){
        this.idade = idade;
    }
    public float getPeso(){
        return peso;
    }
    public void setPeso(float peso){
        this.peso= peso;
    }
    public void Ano(int idade){
        System.out.printf("Seu ano de nascimento é %d",2020-idade);
    }
    }

    public static void main(String[] args){
    Calendar c = Calendar.getInstance();
    int ano;
    ano= c.get(Calendar.YEAR);
    Scanner ler= new Scanner(System.in);
    Pessoa perfis[]= new Pessoa[3];
    for(int i =0;i<3;i++){
        perfis[i]= new Pessoa();
    }
    
    for(int i=0;i<3;i++){
        System.out.printf("Digite o nome da %d pessoa: ",i+1);
        perfis[i].setNome(ler.next());
        System.out.printf("Digite a idade: ");
        perfis[i].setIdade(ler.nextInt());
        System.out.printf("Digite o peso: ");
        perfis[i].setPeso(ler.nextFloat());
        System.out.printf("O seu ano de nascimento e %d",ano-perfis[i].getIdade());
        perfis[i].Ano(perfis[i].getIdade());
    }
   
    } 
}
