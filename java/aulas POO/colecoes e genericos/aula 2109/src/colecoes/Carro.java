package colecoes;

public class Carro implements Comparable<Carro> {
	private int ano;
	private String modelo;
	public Carro( String modelo,int ano) {
		super();
		this.ano = ano;
		this.modelo = modelo;
	}
	public int getAno() {
		return ano;
	}
	public void setAno(int ano) {
		this.ano = ano;
	}
	public String getModelo() {
		return modelo;
	}
	public void setModelo(String modelo) {
		this.modelo = modelo;
	}
	//sobreescrevendo o tostring
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return "Modelo: " + modelo + " - Ano: " + ano;
	}
	
	@Override
	public int compareTo(Carro o) {
		// TODO Auto-generated method stub
	  if(this.ano > o.ano) {
		  return 1;
	  }else if(this.ano < o.ano) {
		  return -1;
	  }else {
		  return 0;
	  }
	}
}
