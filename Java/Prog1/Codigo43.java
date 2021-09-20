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
public class dev69 {
    public static void main(String[] args){
        Scanner ler=new Scanner(System.in);
        int vet[]=new int[10];
        int vet2[]=new int[10];
        for(int i=0;i<10;i++){
            System.out.println("Digite um numero");
            vet[i]=ler.nextInt();
            if(vet[i]%2==0){
                vet2[i]=(vet[i])/2;
            }
            else{
                vet2[i]=(vet[i])*3;
            }
        }
        System.out.println("Vetor 1");
        for(int i=0;i<10;i++){
            System.out.println(vet[i]);
        }
        System.out.println("Vetor 2");
        for(int i=0;i<10;i++){
            System.out.println(vet2[i]);
        }
    }
}
