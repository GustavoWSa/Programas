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
public class ex72 {
    public static void main(String[] args){
    int matriz[][]=new int[4][4];
    int soma=0;
    Scanner ler=new Scanner(System.in);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            System.out.printf("Digite um numero para a posicao[%d][%d]:\n",i,j);
            matriz[i][j]= ler.nextInt();
            if(i==j){
                soma=soma+matriz[i][j];}  
            } 
            }
        for(int i=0;i<4;i++){
           for(int j=0;j<4;j++){
               System.out.printf("%d\t",matriz[i][j]);
        }  
        System.out.print("\n");
        }
        System.out.printf("A soma dos valores da diagonal é:%d",soma);
}}
