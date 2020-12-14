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
public class dev68 {
    public static void main(String[] args){
        Scanner ler=new Scanner(System.in);
        int vet[]=new int[5];
        for(int i=0;i<5;i++){
            System.out.print("Digite um numero");
            vet[i]=ler.nextInt();
        }
        for(int i=4;i>=0;i--){
           System.out.println(vet[i]);
        }
    }
    
}
