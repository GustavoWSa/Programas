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
public class dev65 {
    public static void main(String[] args){
        Scanner ler=new Scanner(System.in);
        int n;
        int i;
        System.out.println("Digite quantos numeros");
        n=ler.nextInt();
        int vet[]=new int[n];
        for(i=0;i<n;i++){
            System.out.println("Digite os numeros");
            vet[i]=ler.nextInt();}
        for(i=n-1;i>=0;i--){
            System.out.println(vet[i]);
        }
    }
public static void 