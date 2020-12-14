/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package testeav1;
import java.util.Scanner;
/**
 *
 * @author gusta
 */
public class ex8 {
    public static void main(String[] args){
        int a,b;
        Scanner ler=new Scanner(System.in);
        System.out.println("Digite o primeiro numero");
        a=ler.nextInt();
        System.out.println("Digite o segundo numero");
        b=ler.nextInt();
        if(a>b){
            System.out.printf("%d é maior",a);
        }
        else if(b>a){
            System.out.printf("%d é maior",b);
        }
        else{
            System.out.println("São iguais");
        }
    }
}
