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
public class vetor {
    public static void main(String[] args){
        int n = 10; // tamanho do vetor
int v[] = new int[n]; // declaração e alocação de espaço para o vetor "v"
int i; // índice ou posição

// processando os "n" elementos do vetor "v"
for (i=0; i<n; i++) {
  v[i] = i; 
  System.out.println(v[i]);// na i-ésima posição do vetor "v" armazena o valor da variável "i"
}
    }
    
}
