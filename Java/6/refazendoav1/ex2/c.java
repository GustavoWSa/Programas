/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package refazendoav1.ex2;
import java.util.Scanner;
/**
 *
 * @author gusta
 */
public class c {
    public static void main(String [] args){
        int a=0;
        Scanner ler=new Scanner(System.in);
        while(a<=0){
            System.out.println("Digite um numero");
            a=ler.nextInt();
        }
        for(int i=a;i<=100;i++)
            System.out.println(i);
    }
}
