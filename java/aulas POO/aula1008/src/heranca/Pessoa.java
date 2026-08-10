package heranca;

public class Pessoa {
	String nome;
	String dataNsc;
	
	public Pessoa(String nome, String dataNsc) {
		this.nome = nome;
		this.dataNsc = dataNsc;
	}
	public void mostrarDados() {
		System.out.println("Nome: " + nome);
		System.out.println("data de nascimento: " + dataNsc );
	}

}
