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
public class g {
    public static void main(String [] args){
        Scanner ler=new Scanner(System.in);
        int a;
        System.out.println("Digite um numero");
        a=ler.nextInt();
        switch(a){
            case 6:
                   System.out.println("Voce digitou 6");
                   break;
            case 5:
                   System.out.println("Voce digitou 5");
                   break;
            case 4:
                   System.out.println("Voce digitou 4");
                   break;
            case 3:
                   System.out.println("Voce digitou 3");
                   break;
            case 2:
                   System.out.println("Voce digitou 2");
                   break;
            case 1:
                   System.out.println("Voce digitou 1");
                   break;
            case 0:
                   System.out.println("Voce digitou 0");
                   break;
        }
    }
}
