package aulas.aula6;
import java.util.Scanner;
/**
 *
 * @author gusta
 */
public class exer62 {
    public static void main(String[] args){
        Scanner ler = new Scanner(System.in);
        int [] vet= new int[4];
        int maior = 0, menor = 0;
        for (int i=0;i<=3;i++){
            System.out.printf("Informe o %d numero: \n", i+1);
            vet[i]= ler.nextInt();
        }
        maior = vet[0];
        menor = vet[0];
        for (int i=0; i<= 3; i++){
            if (vet[i] < menor)   menor =vet[i];
            if (vet[i] > maior)   maior = vet[i];  
        }
        System.out.println("O maior e "+ maior +"e o menor e " + menor);
    }
