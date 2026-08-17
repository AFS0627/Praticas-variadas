package polimorfismo;

public class Clerigo extends Player{
	
	public Clerigo(String nome) {
		super(nome);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void mostrarPoder() {
		System.out.println("Sou um Clérigo meu nome é " + getNome() + "  e meu poder é milagres");
		
	}

}
