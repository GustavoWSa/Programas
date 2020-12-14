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
public class ex74 {
    public static void main(String[] args){
    int matriz[][]=new int[2][2];
    int soma=0;
    Scanner ler=new Scanner(System.in);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            System.out.printf("Digite um numero para a posicao[%d][%d]:\n",i,j);
            matriz[i][j]= ler.nextInt();
            soma=soma+matriz[i][j]; 
            }}
        for(int i=0;i<2;i++){
           for(int j=0;j<2;j++){
               System.out.printf("%d\t",matriz[i][j]);
        }  
        System.out.print("\n");
        }
        System.out.printf("A media dos valores informados é:%d",soma/4);
}}