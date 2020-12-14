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
public class ex7 {
    public static void main(String []args){
        int vet[]=new int[5];
        Scanner ler=new Scanner(System.in);
        int aux;
        for(int i=0;i<5;i++){
            System.out.println("Digite um numero");
            vet[i]=ler.nextInt(); 
        }
        for(int i=0;i<5;i++){
            for(int j=0;j<4;j++){
                if(vet[j]>vet[j+1]){
                    aux=vet[j];
                    vet[j]=vet[j+1];
                    vet[j+1]=aux;
                }
            }
            
    }
        for(int i=4;i>=0;i--){
            System.out.println(vet[i]);
        }
}
