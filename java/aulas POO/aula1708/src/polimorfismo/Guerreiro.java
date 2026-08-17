package polimorfismo;

public class Guerreiro extends Player {
	
	
	
	public Guerreiro(String nome) {
		super(nome);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void mostrarPoder() {
		System.out.println("Sou um Guerreiro meu nome é " + getNome() + " e meu poder é causar dano");
		
	}
}
