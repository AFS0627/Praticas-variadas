package pessoa;

public class Pessoa {
private String cpf;
private String nome;
private int idade;

public Pessoa (String cpf, String nome, int idade) {
	this.cpf = cpf;
	this.nome = nome;
	setIdade(idade);
}

public String getCpf() {
	return this.cpf;
}
public void setNome(String novoNome) {
	this.nome = novoNome;
}
public String getNome() {
	return this.nome;
}

public int getIdade() {
	return this.idade;
}
public void setIdade(int idade) {
	if(idade <= 120 && idade >= 0) {
		this.idade = idade;
	} else {
		System.err.println("Idade invalida!");
	}
	
}

public void andar() {
	System.out.println(this.nome + " de "+ this.idade +" anos está andando");
}
}
