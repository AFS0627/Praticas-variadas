package heranca;

public class main {

	public static void main(String[] args) {
		Pessoa pessoa = new Pessoa("A","1/1/1");
		Funcionario funca = new Funcionario ("B","2/2/2","12345678",13000);
		
		pessoa.mostrarDados();
		funca.mostraDados();
		
		funca.trabalhar(2);

	}

}
