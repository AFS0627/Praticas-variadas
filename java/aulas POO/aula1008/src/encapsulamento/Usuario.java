package encapsulamento;

public class Usuario {
	private String email;
	private String senha;
	
	
	public Usuario(String email, String senha) {
		super();
		this.email = email;
		this.senha = senha;
	}
	
	
	
	public String getEmail() {
		return email;
	}



	public void setEmail(String email, String senha) {
		if(this.senha == senha) {
			System.out.println("email alterado");
		this.email = email;
		}else {
			System.err.println("senha incorreta");
		}
		
	}



//	public String getSenha() {
//		return senha;
//	}



	public void setSenha(String senha, String senhaAnterior) {
		if(senhaAnterior == this.senha) {
			System.out.println("senha alterada");
		this.senha = senha;
		} else {
			System.err.println("senha incorreta");
		}
	}



	public boolean login(String email, String senha) {
		if(this.email == email && this.senha == senha) {
			return true;
		} else {
			return false;
		}
	}
	
	
}
