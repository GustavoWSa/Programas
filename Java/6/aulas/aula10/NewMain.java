
package aulas.aula10;


public class NewMain {
    public static class Pessoa{
        public String nome;
        public int cpf;
        public int ano_nascimento;
        
        
        public Pessoa(String nome, int cpf,int ano){
            this.nome = nome;
            this.cpf= cpf;
            this.ano_nascimento= ano;
        }
    }
    public static class Aluno extends Pessoa{
        public Aluno(String nome, int cpf, int ano){
            super(nome,cpf,ano);
        }
    }
    public static class Professor extends Pessoa{
        public Professor(String nome, int cpf, int ano){
            super (nome,cpf,ano);
        }
    }
    

    
    public static void main(String[] args) {
       Professor professor1 = new Professor("Maria", 23651487, 1987);
       Aluno aluno1 = new Aluno("Jose", 896478515, 1990);
       
       System.out.printf("Nome professor(a): %s\n ", professor1.nome);
       System.out.printf("Cpf do professore: %d\n", professor1.cpf);
       System.out.printf("Ano de nascimento de professore: %d\n", professor1.ano_nascimento);
       System.out.printf("Nome alune: %s\n ", aluno1.nome);
       System.out.printf("Cpf do alune: %d\n", aluno1.cpf);
       System.out.printf("Ano de nascimento de alune:%d", aluno1.ano_nascimento);
    }

}
