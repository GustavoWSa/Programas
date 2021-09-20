/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas.aula9;
import java.util.Scanner;
/**
 *
 * @author gusta
 */
public class ex92 {
    public static class Numeros{
        private int a,b;
        public void SMV(int a,int b){
            System.out.println(a*b);
            System.out.println(a+b);
            if(a>b){
                 System.out.println("A é maior");
        }
            else
            System.out.println("B e maior");}
        public void setA(int a){
            this.a= a;
        }
        public int getA(){
            return a;
        }
        public void setB(int b){
            this.b= b;
        }
        public int getB(){
            return b;
    }
    public static void main(String []args){
        Scanner ler = new Scanner(System.in);
        Numeros n= new Numeros();
        System.out.println("Digite o primeiro valor");
        n.setA(ler.nextInt());
        System.out.println("Digite o segundo valor");
        n.setB(ler.nextInt());
        n.SMV(n.getA(),n.getB());
    }
}
