/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas;
import java.util.Scanner;

/**
 *
 * @author gustavowermelingersa
 */
public class Aulas {
    public static void main(String[] args){
        Scanner ler =new Scanner(System.in);
        int num;
        int fat;
        System.out.print("Informe um numero para fatorar");
        num= ler.nextInt();
        fat=num;
        if(num==1){
            System.out.println("1");
        }
        else if(num==2){
            System.out.println(2);
        }
         else{
        while(fat>2){
            fat=fat-1;
            num=num*fat;
        };
        System.out.printf("O fatorial e de %d",num);
    
    }
}