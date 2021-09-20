/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas.aula8;
import java.util.Scanner;


public class ex81 {
    public static class Pessoa{
        private String nome;
        private int idade;
        private float peso;
    }
    public void andar(){
    
}
    public void dormir(){
    
}
    public static void main(String[] args){
        
        Scanner ler= new Scanner(System.in);
        Pessoa perfis[] = new Pessoa[5];
        for(int i=0;i<5;i++){
           perfis[i]=new Pessoa();
        }
        for(int i=0;i<5;i++){
        System.out.printf("Dados do %d Cliente--\n ", i+1);
        System.out.printf("Informe o nome da pessoa: ");
        perfis[i].nome= ler.next();
        System.out.printf("Sua idade: ");
        perfis[i].idade= ler.nextInt();
        System.out.printf("Seu peso: ");
        perfis[i].peso=ler.nextFloat();
                
    }
    }
}
