/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas.aula6;
import java.util.Scanner;
/**
 *
 * @author gusta
 */
public class exer61 {
    public static void main(String[] args){
        Scanner ler= new Scanner(System.in);
        int v[]=new int[5];
        int soma=0;
        int media;
        int i;
        for(i=0;i<5;i++){
        System.out.print("Digite um numero");
        v[i]=ler.nextInt();
        soma=soma+v[i];}
        media=soma/5;
        System.out.printf("A soma é de %d",soma);
        System.out.printf("e a media é de %d",media);
    }
}
