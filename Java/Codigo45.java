/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package testeav1;

/**
 *
 * @author gusta
 */
public class ex6 {
    public static void main(String[] args){
        int vet[]={2,14,78,56,4,567,12};
        for(int i=0;i<7;i=i+2){
            if(vet[i]%2==0){
                System.out.println(vet[i]);
            };
        }
    }
}
