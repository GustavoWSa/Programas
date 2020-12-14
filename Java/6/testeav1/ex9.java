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
public class ex9 {
    public static void main(String [] args){
        float vet[] = new float[5];
        float media=0,total=0;
        Scanner ler=new Scanner(System.in);
        for(int i=0;i<=4;i++){
            System.out.printf("Digite a %d nota",i+1);
            vet[i]=ler.nextFloat();
            total=total+vet[i];
        }
        media=total/5;
        System.out.printf("A media e %.2f",media);
    }
}
