

package teste2;
import java.util.Scanner;

public class num12 {
    public class Funcionarios{
        public String nome;
        public String matricula;
        private String apelido;
        private long cpf;
        private int idade;
    
        public Funcionarios(String nome,String matricula,String apelido, long cpf, int idade){
            this.nome=nome;
            this.matricula=matricula;
            this.apelido=apelido;
            this.cpf=cpf;
            this.idade=idade;
        }
    
    public void setApelido(String apelido){
    this.apelido=apelido;
}
    public String getApelido(){
        return apelido;
    }
    public void setCpf(long cpf){
        this.cpf=cpf;
    }
    public long getCpf(){
        return cpf;
    }
    public void setIdade(int idade){
        this.idade=idade;
    }
    public int getIdade(){
        return idade;
    }
    }
    public static class Secretaria extends Funcionarios{
        public Secretaria(String nome,String matricula,String apelido,long cpf, int idade){
            super(nome,matricula,apelido,cpf,idade);
            System.out.println("Este funcionario é um secretário");
        }
    
    }
    public class Coordenacao extends Funcionarios{
        
    }
    public class Limpeza extends Funcionarios{
        
    }
    public static void main(String [] args){
     Scanner ler = new Scanner(System.in);
     String[] cargos={"secretaria","coordenacao","limpeza"};
     String cargo;
     System.out.println("Digite o cargo do funcionario:");
     cargo=ler.nextLine();
     if(cargo.equals(cargos[0])){
         Secretaria secretaria1= new Secretaria("maria","2018","ma",10,20);
         System.out.println("Digite seu nome");
         secretaria1.nome=ler.nextLine();
         System.out.println("Digite sua matricula");
         secretaria1.matricula=ler.nextLine();
         System.out.println("Digite seu apelido");
         secretaria1.setApelido(ler.nextLine());
         System.out.println("Digite seu cpf");
         secretaria1.setCpf(ler.nextLong());
         System.out.println("Digite sua idade");
         secretaria1.setIdade(ler.nextInt());
         
     }
         
    }
}