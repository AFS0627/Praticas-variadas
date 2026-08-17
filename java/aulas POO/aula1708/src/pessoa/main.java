package pessoa;

public class main {

	public static void main(String[] args) {
		Pessoa p = new Pessoa("001.002.001.03", "Arthur", 18);
		p.andar();
		
		System.out.println(p.getCpf());
		
		p.setNome("Arthur 2");
		System.out.println(p.getNome());
		p.andar();
		
		System.out.println(p.getCpf());
		p.setIdade(20);
		p.andar();
		
	}

}
