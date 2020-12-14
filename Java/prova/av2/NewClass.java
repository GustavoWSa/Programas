

package prova.av2;
import java.util.Scanner;
import java.util.Calendar;
public class NewClass {
    public static class Pessoa{
        private String nome;
        private int nascimento;
        private double altura;
        
        public void setNome(String nome){
        this.nome=nome;
    }
        public String getNome(){
            return nome;
        }
        public void setNascimento(int nascimento){
            this.nascimento=nascimento;
        }
        public int getNascimento(){
            return this.nascimento;
        }
        public void setAltura(double altura){
            this.altura=altura;
        }
        public double getAltura(){
            return this.altura;
        }
        /*public Pessoa(String nome,int nascimento,double altura){
            this.nome=nome;
            this.nascimento=nascimento;
            this.altura=altura;
        }*/
        public void Imprimir(int a,Pessoa pessoa[]){
            System.out.printf("Nome: %s \n",pessoa[a].getNome());
            System.out.printf("Data de nascimento: %d\n",pessoa[a].getNascimento());
            System.out.printf("Altura: %2f\n",pessoa[a].getAltura());
        }
    }
        public static void Idade(Pessoa pessoa,int a){
           Calendar c= Calendar.getInstance();
           int ano;
           ano=c.get(Calendar.YEAR);
            System.out.printf("A idade da pessoa informada é: %d",ano-pessoa.getNascimento());
        }

    public static void main(String[] args){
        Scanner ler = new Scanner(System.in);
        int i,a=0;
        int dia,mes,ano;
        System.out.println("Digite quantas pessoas quer registrar");
        i=ler.nextInt();
        Pessoa pessoa[]= new Pessoa[i];
        for(a=0; a<i;a++){
            pessoa[a]=new Pessoa();
            System.out.println("Digite o nome: ");
            pessoa[a].setNome(ler.next());
            System.out.println("Digite o ano de nascimento");
            pessoa[a].setNascimento(ler.nextInt());
            System.out.println("Digite a altura");
            pessoa[a].setAltura(ler.nextDouble());
            pessoa[a].Imprimir(a, pessoa);
            Idade(pessoa[a],a);
        }
        
}
}