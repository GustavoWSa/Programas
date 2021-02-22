

package prova.av2;
import java.util.Scanner;

public class NewClass2 {
    public static void imc(int g,double h){
        double peso;
        if(g==1){
            peso=h;
            peso=peso*72.7-58;
            System.out.println(peso);
        }
        if(g==2){
            peso=h;
            peso=peso*62.1-44.7;
            System.out.println(peso);
        }
    }
    public static void main (String[] args){
        Scanner ler = new Scanner(System.in);
        int g;
        double h;
        System.out.println("Digite 1 para homem e 2 para mulher");
        g=ler.nextInt();
        System.out.println("Digite sua altura");
        h=ler.nextDouble();
        imc(g,h);
                
    }
}
