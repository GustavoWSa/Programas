/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas.aula7;

import java.util.Scanner;

/**
 *
 * @author gusta
 */
public class ex73 {
    public static void main(String[] args){
    int matriz[][]=new int[3][3];
    int par=0;
    int impar=0;
    Scanner ler=new Scanner(System.in);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            System.out.printf("Digite um numero para a posicao[%d][%d]:\n",i,j);
            matriz[i][j]= ler.nextInt();
            if(matriz[i][j]%2==0){
                par+=1;}
            else
                impar +=1;
            } 
            }
        for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
               System.out.printf("%d\t",matriz[i][j]);
        }  
        System.out.print("\n");
        }
        System.out.printf("O numero de pares é: %d e o de impares é: %d",par,impar);
}}
}
