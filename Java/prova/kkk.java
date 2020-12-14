/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package prova;
import java.util.Scanner;
/**
 *
 * @author gusta
 */
public class kkk {
    public static void main(String [] args){
         /*
        for(int i = 0; i < 4; i ++){
            quesito[i] = new Quesito();
        }
        
        quesito[0].nome = "harmonia";
        quesito[1].nome = "fantasia";
        quesito[2].nome = "bateria";
        quesito[3].nome = "samba";
        */
        int quant_jurado = 0;
        int quant_escola = 0;
        
        Scanner in = new Scanner (System.in);
        int op = 0;
        
        while(true){
            System.out.println("Digite 1 para adicionar um novo jurado.");
            System.out.println("Digite 2 para adicionar uma nova nota.");
            System.out.println("Digite 3 para adicionar uma nova escola.");
            System.out.println("Digite 4 para adicionar computar resultados.");
            System.out.print("Op = ");
            
            op = in.nextInt();
            
            if(op == 1)
                quant_jurado = registrarNovoJurado(quant_jurado);
            if(op == 2)
                registrarNota();
            if(op == 3)
                quant_escola = registrarNovaEscola(quant_escola);
            
        }

}
