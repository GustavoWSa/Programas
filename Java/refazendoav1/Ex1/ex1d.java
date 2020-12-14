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
public class ex1d {
    public static void main(String [] args){
        String nome;
        int a;
        Scanner ler = new Scanner(System.in);
        System.out.println("Digite o seu nome");
        nome=ler.next();
        System.out.println("E sua idade");
        a=ler.nextInt();
        System.out.printf("Seu nome é %s \n",nome);
        System.out.printf("E sua idade e %d",a);
    }
}
