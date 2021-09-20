/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas.aula10;

/**
 *
 * @author gusta
 */
public class NewClass {
    public static class Mamifero{
    public String nome;
    public Mamifero(String nome){
        this.nome= nome;
    }
    public void locomover(){
    
                            }
    }
    public static class Macaco extends Mamifero{
        public Macaco(String nome){
            super(nome);
        }
        public void locomover(){
            System.out.print("Pular de galho em galho\n");
        }
    }
    public static class Homem extends Mamifero{
        public Homem(String nome){
            super(nome);
        }
        public void locomover(){
        System.out.print("Andar\n");
    }}
    public static class Baleia extends Mamifero{
        public Baleia(String nome){
            super(nome);
        }
        public void locomover(){
            System.out.print("Nadar\n");
        }
    }
    
    public static void main(String[] args){
       Mamifero animal;
       
       animal = new Macaco("Mico Leao Dourado");
       animal.locomover();
       
       animal = new Baleia("Baleia Azul");
       animal.locomover();
       
       animal = new Homem("Maria");
       animal.locomover();
       
    }
}
