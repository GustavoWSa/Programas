/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas.aula8;

/**
 *
 * @author gusta
 */
public class NewClass {
public static class Numeros{
    private int numero =0;
    
    /*public void setNumero(int novoNumero){
        numero = novoNumero;
    }
    
    public int getNumero(){
        return numero;
    } */
}
public static void main(String[] args){
    Numeros n= new Numeros();
    //n.setNumero(15)
    System.out.println(n.numero);
}
}