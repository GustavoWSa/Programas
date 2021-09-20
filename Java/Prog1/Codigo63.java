/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package prova;
import java.util.Scanner;
/**
 *
 * @author gusta
 */
public class num6 {
 public static void main(String [] args){
    Scanner ler= new Scanner(System.in);
    int num=0;
    System.out.println("Digite um numero");
    num=ler.nextInt();
    if(num%2==0)
        System.out.println("Voce digitou um numero par");
    else
        System.out.println("Voce digitou um numero impar");
 }   
}
