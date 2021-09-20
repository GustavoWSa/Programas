/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas.aula7;

/**
 *
 * @author gusta
 */
public class testematriz {
    public static void main(String[] args){
        int[][] matriz = new int [4][3];
        int i=0;
        for(i=0; i<=3; i++){
            for(int j=0;j<=2;j++){
                    matriz [i][j]=1;
            }
        }
        for(i=0;i<=3;i++){
            for(int j=0;j<=2;j++){
                System.out.printf("%d\t",matriz[i][j]);
        }
        System.out.print("\n");    
    }
}
