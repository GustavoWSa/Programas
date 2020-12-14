

package av3;
import java.util.Scanner;

public class NewClass1 {
    public static void main(String[] args){
        int triangulo[]= new int[3];
        int soma=0,dif;
        int maior=0,aux;
        Scanner ler = new Scanner(System.in);
        for(int i=0;i<3;i++){
            System.out.println("Digite um dos lados");
            triangulo[i]=ler.nextInt();            
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(triangulo[i]>triangulo[j]){
                    aux=triangulo[i];
                    triangulo[i]=triangulo[j];
                    triangulo[j]=aux;
                }
            }
        }
        for(int i=1;i<3;i++){
            soma+=triangulo[i];
        }
        dif=triangulo[1];
        dif-=triangulo[2];
        if(triangulo[0]>dif){
            if(triangulo[0]<soma){
                System.out.println("Pode ser um triangulo");
                if(triangulo[0]==triangulo[2]){
                    System.out.println("E um triangulo equilatero");
                }
                if(triangulo[0]==triangulo[1]){
                    if(triangulo[0]!=triangulo[2]){
                        System.out.println("E um triangulo Isoscele");
                    }    
                }
                if(triangulo[0]!=triangulo[1]){
                    System.out.println("E um triangulo escaleno");
                }
                
            }
        }
        
}
