package sobrecarga;

public class Sobrecarga {

	public static void somar(int a, int b) {
		System.out.println((a+b));
	}
	public static void somar(int a, int b, int c) {
		System.out.println((a+b+c));
		
	}
	
	public static void somar(int[] v) {
		int x =0;
		for(int i=0;i<v.length;i++) {
			x += v[i];
			
		}
		System.out.println(x);
	}
	public static void somar(double a, double b) {
		System.out.println("Em ponto flutuante: "+(a+b));
		
	}
	public static void main(String[] args) {
		somar(4,5);
		somar(4,5,6);
	}
}
