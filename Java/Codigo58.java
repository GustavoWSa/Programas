

package prova.av2;
import java.util.Scanner;

public class NewClass1 {
    public static class Agenda{
        String nome;
        long telefone;
        String endereco;
    }
    public static void main(String[] args){
        Scanner ler = new Scanner(System.in);
        Agenda pessoa[]= new Agenda[10];
        for(int i=0;i<10;i++){
            pessoa[i]=new Agenda();
        }
        for(int i=0;i<10;i++){
            System.out.println("Digite o nome");
            pessoa[i].nome=ler.next();
            System.out.println("Digite o telefone");
            pessoa[i].telefone=ler.nextLong();
            System.out.print("Digite o endereco\n");
            pessoa[i].endereco=ler.nextLine();
        }
    }
}
