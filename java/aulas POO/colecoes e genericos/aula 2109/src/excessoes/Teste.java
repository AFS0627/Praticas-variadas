package excessoes;

public class Teste {

    public static void main(String[] args) {

        String[] palavras = new String[] {"Carro", "Arvore", "Cachorro"};

        imprimirPalavraPorIndice(6, palavras);
        imprimirPalavraPorIndice(2, palavras);

        // System.out.println(soma(mult(sub(10, 5), sub(9, 8)), 8));
    }

    static double soma(double a, double b) {
        return a + b;
    }

    static double sub(double a, double b) {
        return a - b;
    }

    static double mult(double a, double b) {
        return a * b;
    }

    static double div(double a, double b) {
        try {
            return a / b;
        } catch (ArithmeticException e) {
            return a / b;
        }
    }

    static void imprimirPalavraPorIndice(int i, String[] palavras) {
        try {
            System.out.println(palavras[i]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Esse índice não existe no vetor");
        }
    }
}
