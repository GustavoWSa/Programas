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
public class exer4num2 {
    public static void main(String[] args){
        Scanner ler= new Scanner(System.in);
        int anos,meses,dias;
        int total;
        System.out.printf("Digite quantos anos");
        anos=ler.nextInt();
        System.out.printf("Digite quantos meses");
        meses=ler.nextInt();
        System.out.printf("Digite quantos dias");
        dias=ler.nextInt();
        anos=anos*365;
        meses=meses*30;
        total=calculo(dias,meses,anos);
        System.out.printf("Um total de %d",total);
    }
    public static int calculo(int dias,int meses, int anos){
    int totals;
    totals=dias+meses+anos;
    return totals;
}
