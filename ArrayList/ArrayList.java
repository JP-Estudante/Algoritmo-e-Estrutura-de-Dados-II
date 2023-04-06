package exercicios;

import java.util.ArrayList;

public class ArrayList {
    public static void main(String[] args) {
        //declarando um arraylist do tipo string
        ArrayList<String> carros = new ArrayList();  
        
        carros.add("Corsa");
        carros.add("Gol");
        carros.add("Pálio");
        carros.add("Uno Mille");
        
        System.out.println("Tamanho da lita: " + carros.size()); 
        
        /*
        for(int i=0; i<carros.size(); i++){
            System.out.println(carros.get(i));            
        }
        */
        
        for(String carro: carros){
            System.out.println(carro);            
        }
    }    
}
