package aula0308;

public class main {

	public static void main(String[] args) {
		Carro gol = new Carro(120,"XYZ5-A6AB","GTI");
		
//		gol.modelo = "GTI";
//		gol.potencia = 120;
//		gol.placa = "XYZ5-A6AB";
		
		gol.ligar();
		gol.acelerar(20);
		gol.freiar(100);
		gol.desligar();
		
//		System.out.println("Modelo do carro: " + gol.modelo);
//		System.out.println("potencia do carro: " + gol.potencia);
//		System.out.println("placa do carro: " + gol.placa);
		
	Carro vectra = new Carro(133,"FG23-WE45","GT");
//	vectra.modelo = "GT";
//		vectra.potencia = 133;
//		vectra.placa = "FG23-WE45";
		
		vectra.ligar();
		
	}

}
