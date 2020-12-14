/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author gusta
 */
public class exercicio3pessoa {
    private static class Pessoa{
        private String nome;
        private int idade;
        private float peso;
    }
    public void andar(){
    
}
    public void dormir(){
    
}
    public static void main(String[] args){
        Pessoa pessoa1= new Pessoa();
        pessoa1.nome="Juliana";
        pessoa1.idade=23;
        pessoa1.peso=75;
        
        Pessoa pessoa2= new Pessoa();
        pessoa2.nome="Carlos";
        pessoa2.idade=39;
        pessoa2.peso=72;
        
        Pessoa pessoa3= new Pessoa();
        pessoa3.nome="Ericka";
        pessoa3.idade=15;
        pessoa3.peso=60;
    }
}
