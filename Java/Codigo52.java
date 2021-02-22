/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas.aula6;
import java.util.Scanner;
/**
 *
 * @author gusta
 */
public class exer63 {
    public static void main(String[] args){
        Scanner ler= new Scanner(System.in);
        int vet[]=new int[5];
        for(int i=0;i<5;i++){
            System.out.print("Digite um numero");
            vet[i]=ler.nextInt();  
        }
        Calculo(vet); 
    }
   public static void Calculo(int vet[]){
       for(int i=0;i<5;i++){
            System.out.print(vet[i]-1);
            System.out.print(" ");
            System.out.println(vet[i]+1);
       } 
}
}