package polimorfismo;

public class Mago extends Player{

	public Mago(String nome) {
		super(nome);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void mostrarPoder() {
		System.out.println("Sou um mago meu nome é " + getNome() + " e meu poder é bola de fogo");
		
	}
	
}
