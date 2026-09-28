package colecoes;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.Set;

public class TesteColecoes {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//Cria a lista de carros
		//List<Carro> carros = new ArrayList<Carro>();
		
		
		//set não se importa com a ordem 
		//Set<Carro> carros = new HashSet<Carro>();
		
		//fila
		Queue<Carro> carros = new PriorityQueue<Carro>(10);
		
		//Cria carros
		Carro carro = new Carro("Gol",1986);
		Carro carro2 = new Carro("Up!",2016);
		Carro carro3 = new Carro("Polo",2024);
		
		
		//adiciona carros criados na lista
		carros.add(carro);
		carros.add(carro2);
		carros.add(carro3);
		
		System.out.println("");
		
		
		//verifica se a lista contem carro2 se tiver retorna true
		System.out.println(carros.contains(carro2));
		
		//remove o carro 2 da lista
		carros.remove(carro2);
		
		//agora retorna false pois removemos o carro 2
		System.out.println(carros.contains(carro2));
		
		
		//imprime a lista carros
		System.out.println(carros);
		
		
		//imprime cada carro
		for (Carro carro1 : carros) {
			System.out.println(carro1);
			
		}
		

	}

}
