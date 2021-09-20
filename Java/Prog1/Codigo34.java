
package aulas.aula10;
import java.util.Scanner;

public class SomaSubtracao {
    public abstract class OperacaoMatematica{
        public abstract int calcular(int x,int y);
    }

    public static class Soma extends OperacaoMatematica{
        public int calcular(int x, int y){
            return x+ y;
        }
    }
    public static class Subtracao extends OperacaoMatematica{
        public int calcular(int x, int y){
            return x-y;
        }
    }
    public static class Divisao extends OperacaoMatematica{
        public int calcular(int x,int y){
            int div;
            
            try{
                div= x/y;
            }catch(ArithmeticException e){
                System.out.printf("Vc fez divisao por zero\n");
                div=0;
            }
            return div;
        }
    }
    public static void main(String[] args) {
       OperacaoMatematica operacao;
       int x,y;
       Scanner ler = new Scanner(System.in);
       //Calculando a soma
       System.out.print("Digite o primeiro valor: ");
       x=ler.nextInt();
       System.out.print("Digite o segundo valor: ");
       y=ler.nextInt();
       calculo(new Soma(),x,y);
       //Calculando a subtracao
       System.out.print("\n Digite o primeiro valor: ");
       x=ler.nextInt();
       System.out.print("Digite o segundo valor: ");
       y=ler.nextInt();
       calculo(new Subtracao(),x,y);
       System.out.print("\n Digite o primeiro valor: ");
       x=ler.nextInt();
       System.out.print("Digite o segundo valor: ");
       y=ler.nextInt();
       calculo(new Divisao(),x,y);
    }
public static void calculo(OperacaoMatematica operacao, int x, int y)
{
    System.out.printf("O resultado e: \n" + operacao.calcular(x,y));
}
}
