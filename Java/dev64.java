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
public class dev64 {
    public static void main(String[] args){
        Scanner ler=new Scanner(System.in);
        int vet[]=new int[10];
        int total=0;
        for(int i=0;i<10;i++){
            System.out.println("Digite um numero");
            vet[i]=ler.nextInt();
            if(vet[i]%3==0){
                total=total+1;
                };
                }
        System.out.printf("Voce digitou %d numeros multiplos de 3",total);}
}
