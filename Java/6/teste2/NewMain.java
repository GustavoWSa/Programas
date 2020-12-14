
package teste2;
import java.util.Scanner;

public class NewMain {

    
    public static void main(String[] args) {
       Scanner ler = new Scanner(System.in);
       int cont=0;
       int matriz[][]= new int[3][3];
       for (int i=0;i<3;i++){
           for (int j=0;j<3;j++){
               System.out.printf("Digite o numero da posicao [%d][%d]:",i,j);
               matriz[i][j]=ler.nextInt();
               if(j>0){
                   if(i!=j){
                       cont+=1;}
               }                
           }
       }
    if(cont==3){
        System.out.println("E uma matriz triangular inferior");
    }
    else
        System.out.println("Nao e uma matriz triangular inferior");
    }
