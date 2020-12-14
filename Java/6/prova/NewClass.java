

package prova;


public class NewClass {
    public static void main(String [] args){
        int num1=3,num2=4,soma;
        soma=calculo(num1,num2);
        System.out.println(soma);
        System.out.println(new somar(),num1,num2);
    }
    public static int calculo(int num1,int num2){
        int calculo;    
        calculo=num1+num2;
        return calculo;
    }
    public static class matematica{
        int num1;
    }
    public int somar(int num1,int num2){
        int soma;
        soma=num1+num2;
        return soma;
    }
}
