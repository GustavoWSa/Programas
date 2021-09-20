/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas.exer4;
import java.util.Scanner;
/**
 *
 * @author gusta
 */
public class exer4num3 {
    public static void main(String[] args){
        Scanner ler=new Scanner(System.in);
        int a,b,mult;
        System.out.println("Digite um numero");
        a=ler.nextInt();
        System.out.println("Digite um numero");
        b=ler.nextInt();
        mult=calculo(a,b);
        System.out.printf("O resultado da multiplicacao e %d",mult);
    }
    public static int calculo(int a,int b){
        int multi;
        multi=a*b;
        return multi;
    }
}
