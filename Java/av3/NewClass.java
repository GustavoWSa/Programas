

package av3;
import java.util.Calendar;
import java.util.Scanner;
public class NewClass {
    public static class Funcionario{
            String nome;
            int dia,mes,ano;
            float salario;
            
            public static void aniversario(int id,int mes){
                Calendar c = Calendar.getInstance();
                int month;
                month=c.get(Calendar.MONTH);
                if(month==mes-1){
                    System.out.println("E seu mes de aniversario");}
            }
            /*public Funcionario(String nome,int dia,int mes,int ano,float salario){
                
                this.nome=nome;
                this.dia=dia;
                this.mes=mes;
                this.ano=ano;
                this.salario=salario;
}*/}
            
            public static class Gerente extends Funcionario{
                public Gerente(String nome,int dia,int mes,int ano ,float salario){
                    /*super(nome,dia,mes,ano,salario);*/
                }
            }
            public static class Atendente extends Funcionario{
                public Atendente(String nome,int dia,int mes,int ano ,float salario){
                    /*super(nome,dia,mes,ano,salario);*/
                } 
            }
            
    
    public static void main(String [] args){
        Scanner ler = new Scanner(System.in);
        int id;
        System.out.println("Digite 0 para gerente ou 1 para atendente");
        id=ler.nextInt();
        if(id==0){
            Gerente gerente1= new Gerente("gu",24,01,2000,1800);
            System.out.printf("Digite seu nome");
            gerente1.nome=ler.next();
            System.out.println("Digite seu dia de nascimento");
            gerente1.dia=ler.nextInt();
            System.out.println("Digite seu mes de nascimento");
            gerente1.mes=ler.nextInt();
            System.out.println("Digite seu ano de nascimento");
            gerente1.ano=ler.nextInt();
            Funcionario.aniversario(id,gerente1.mes);
        }
        if(id==1){
            Atendente atendente1= new Atendente("gu",24,01,2000,1800);
            System.out.printf("Digite seu nome");
            atendente1.nome=ler.next();
            System.out.println("Digite seu dia de nascimento");
            atendente1.dia=ler.nextInt();
            System.out.println("Digite seu mes de nascimento");
            atendente1.mes=ler.nextInt();
            System.out.println("Digite seu ano de nascimento");
            atendente1.ano=ler.nextInt();
            Funcionario.aniversario(id,atendente1.mes);
        }
    }
}
