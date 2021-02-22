/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulas;

/**
 *
 * @author gustavowermelingersa
 */
public class Aula4classesobjetos {
    public static class Gatos{
        //Atributos
        public String raca;
        public String nome;
        public float peso;
        public void miar(){
            //metodo miar
        }
    }
        public void comer(){
            //metodo comer
        }
        public void dormir(){
            //metodo dormir
        }

public static void main(String[] args){
Gatos gato1 = new Gatos();
gato1.raca = "Maine Moon";
gato1.nome= "Listrado";
gato1.peso= 3;

Gatos gato2 = new Gatos();
gato2.raca="Savanna";
gato2.nome="Gatuno";
gato2.peso=5;

Gatos gato3 = new Gatos();
gato3.raca = "Siames";
gato3.nome="Bichano";
gato3.peso=4;
}
}