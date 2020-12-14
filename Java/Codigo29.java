/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas;
import java.util.Scanner;
/**
 *
 * @author gusta
 */
public class NewClass {
    public static void main(String[] args){
        Scanner ler= new Scanner(System.in);
        int a,b,soma;
        System.out.println("Informe um n->");
        a= ler.nextInt();
        System.out.println(("Informe um n->"));
        b= ler.nextInt();
        soma=calculo(a,b);
        System.out.printf("O resultado da soma e de %d",soma);
        
    }
    public static int calculo(int a,int b){
        int somar;
        somar = a+b;
        return somar;
    }
}
