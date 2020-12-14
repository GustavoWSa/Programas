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
public class d {
    public static void main(String [] args){
        Scanner ler=new Scanner(System.in);
        int a;
        System.out.println("Digite um numero");
        a=ler.nextInt();
        if(a%2==0)
            System.out.println("E par");
        else
            System.out.println("E impar")
    }
}
