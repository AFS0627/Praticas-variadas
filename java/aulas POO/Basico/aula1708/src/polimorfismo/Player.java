package polimorfismo;

public abstract class Player {

	private String poder;
	private String nome;
	
	public Player(String nome) {
		this.nome = nome;
	}
	
	
	
	public abstract void mostrarPoder();



	public String getPoder() {
		return poder;
	}



	public void setPoder(String poder) {
		this.poder = poder;
	}



	public String getNome() {
		return nome;
	}



	public void setNome(String nome) {
		this.nome = nome;
	}
	
	
	
	
}
