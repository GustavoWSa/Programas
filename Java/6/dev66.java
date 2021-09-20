/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas.aula6;
import java.util.Scanner;
import java.util.*;
import java.lang.*;
import java.io.*;
    public class dev66 {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int vet[] = new int[10];
        int num1;
        int num2;
        int num;
        System.out.println("Digite o primeiro numero");
        num1 = ler.nextInt();
        System.out.println("Digite o segundo numero");
        num2 = ler.nextInt();
        num = num1;
        Tabela(num);
        num=num2;
        Tabela(num);
    }
    public static void Tabela(int num){
        
        System.out.printf("Tabelas de %d \n", num);
        System.out.println("Soma");
        for (int i = 0; i <= 10; i++) {
            System.out.print(i + num);
        }
        System.out.println("Multiplicacao");
        for (int i = 0; i <= 10; i++) {
            System.out.println(i * num);
        }
        System.out.println("Subtracao");
        for (int i = 0; i <= 10; i++) {
            System.out.println(num - i);
        }
        System.out.println("Divisao");
        for (int i = 1; i <= 10; i++) {
            System.out.println(num / i);
        }
        System.out.printf("Tabelas de %d \n", num);
        System.out.println("Soma");
        for (int i = 0; i <= 10; i++) {
            System.out.println(i + num);
        }
        System.out.println("Multiplicacao");
        for (int i = 0; i <= 10; i++) {
            System.out.println(i * num);
        }
        System.out.println("Subtracao");
        for (int i = 0; i <= 10; i++) {
            System.out.println(num - i);
        }
        System.out.println("Divisao");
        for (int i = 1; i <= 10; i++) {
            System.out.println(num / i);
        }
    }
}
