/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas;

/**
 *
 * @author gusta
 */
public class exercicio3 {
    public static class Conta{
        private String nome;
        private int agencia;
        private int num;
        private float saldo;
        //Construtor de Objetos
        Conta(){
            System.out.println("Objeto criado com sucesso!");
        }
    }
    public void saque(){
    }
    public void transferencia(){
    }
    
public static void main(String[] args){
    Conta cliente1 = new Conta();
    cliente1.nome= "Maria";
    cliente1.agencia=8974;
    cliente1.num=0002345;
    cliente1.saldo=4500,00;
    
    Conta cliente2= new Conta();
    cliente2.nome="Joao";
    cliente2.agencia=3976;
    cliente2.num=78450;
    cliente2.saldo=8500,00;
    
    Conta cliente3 = new Conta();
    cliente3.nome="Jessica";
    cliente3.agencia=3806;
    cliente3.num=178450;
    cliente3.saldo=5500,00;
    
}     
}
