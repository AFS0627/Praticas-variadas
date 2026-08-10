package encapsulamento;

public class main {

	public static void main(String[] args) {
		
		Usuario user = new Usuario("a@gmail","123");
		
		if(user.login("a@gmail","123")){
			System.out.println("logado");
		}else {
			System.out.println("nao logado");
		}
		
		if(user.login("a", "123")){
			System.out.println("logado");
		}else {
			System.out.println("nao logado");
		}
		
		if(user.login("a@gmail", "1234")){
			System.out.println("logado");
		}else {
			System.out.println("nao logado");
		}
		
		System.out.println(user.senha);

	}

}
