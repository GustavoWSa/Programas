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
public class ex77 {
    public static void main(String[] args){
        int matriz[][]=new int[3][3];
        Scanner ler=new Scanner(System.in);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                System.out.printf("Digite um numero para a posicao[%d][%d]:\n",i,j);
                matriz[i][j]= ler.nextInt();
            }}
        for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
               System.out.printf("%d\t",matriz[i][j]);
        }
          
        System.out.print("\n");    
    }
        if(matriz[0][1]==0 && matriz[0][2]==0 && matriz[1][2]==0){
        System.out.print("É uma matriz triangular superior");
    }
}
}
