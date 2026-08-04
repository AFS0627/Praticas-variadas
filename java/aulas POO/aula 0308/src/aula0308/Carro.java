package aula0308;

public class Carro {

	int potencia;
	String placa;
	String modelo;
	
	//métodos
	
	void ligar() {
		System.out.println( this.modelo + " está ligando!");
	}
	
	void desligar() {
		System.out.println(this.modelo + " está desligando!");
	}
	
	void acelerar(int intensidade) {
		System.out.println(this.modelo + "Acelerando com intencidade " + intensidade);
	}
	
	void freiar(int intensidade) {
		System.out.println(this.modelo + "freiando com intencidade " + intensidade);
	}
}
