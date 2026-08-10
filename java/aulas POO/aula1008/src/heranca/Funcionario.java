package heranca;

public class Funcionario extends Pessoa {
	
	String matricula;
	float salario;
	
	public void trabalhar(int horas) {
		System.out.println("Funcionario " + nome + " está trabalhando " + horas + " horas");
	}

	public Funcionario(String nome, String dataNsc, String matricula, float salario) {
		super(nome, dataNsc);
		this.matricula = matricula;
		this.salario = salario;
		
	}
	
	
	public void mostraDados() {
		super.mostrarDados();
		System.out.println("Matricula: " + matricula);
		System.out.println("Salario: " + salario + "\n");
	}
	
}
