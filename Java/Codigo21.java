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
public class exer4num1 {
    public static void main(String[] args){
        Scanner ler= new Scanner(System.in);
        int num;
        System.out.printf("Informe um numero");
        num=ler.nextInt();
        System.out.print(num);
        calculo(num);
    }
    public static void calculo(int num){
    if(num>0){
            System.out.printf(" e positivo");
        }
        else if(num==0){
            System.out.printf(" e zero");
        }
        else{
            System.out.printf(" e negativo");
        }
}
}
