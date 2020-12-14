/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package refazendoav1.Ex1;
import java.util.Scanner;
/**
 *
 * @author gusta
 */
public class Ex1abc {
    public static void main(String [] args){
        int a,b;
        Scanner ler= new Scanner(System.in);
        System.out.println("Digite o primeiro numero");
        a=ler.nextInt();
        System.out.println("Digite o segundo numero");
        b=ler.nextInt();
        System.out.printf("A soma é igual a %d \n",a+b);
        System.out.printf("A multiplicacao é igual a %d \n",a*b);
        System.out.printf("E o resto é %d", a%b);
    }
}
