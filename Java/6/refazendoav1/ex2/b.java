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
public class b {
    public static void main(String [] args){
        int a;
        Scanner ler=new Scanner(System.in);
        System.out.println("Digite seu ano de nascimento");
        a=ler.nextInt();
        if(a<=2003){
            System.out.println("Voce e maior de idade");
        }
        else {System.out.println("Voce e menor de idade");
        }
    }
}
