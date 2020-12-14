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
public class ex71 {
    public static void main(String[] args){
        int matriz[][]=new int[3][3];
        int soma[]=new int[3];
        int adicao;
        Scanner ler=new Scanner(System.in);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                System.out.printf("Digite um numero para a posicao[%d][%d]:\n",i,j);
                matriz[i][j]= ler.nextInt();
                soma[i]=soma[i]+matriz[i][j];
            }}
        for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
               System.out.printf("%d\t",matriz[i][j]);
        }
        System.out.print(soma[i]);   
        System.out.print("\n");    
    }  
        }
    }

