package excessoes;

public class Teste {

    public static void main(String[] args) {

        String[] palavras = new String[] {"Carro", "Arvore", "Cachorro"};

        imprimirPalavraPorIndice(6, palavras);
        imprimirPalavraPorIndice(2, palavras);

        // System.out.println(soma(mult(sub(10, 5), sub(9, 8)), 8));
        double a = 9, b = 0;
        
        
        System.out.println(div(a,b));
        
        //ou
        
        try {
        	System.out.println(div(a,b));
        } 
        catch(Exception e){
        	System.err.println("Esse índice não existe no vetor");
        	System.err.println(e.getStackTrace());
        	
        }
        
        
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
        
         if(b != 0)    
        	 return a / b;
         else 
        	 throw new ArithmeticException("Erro: Divisao por zero");
         
            
        }
    
    static void imprimirPalavraPorIndice(int i, String[] palavras) {
        try {
            System.out.println(palavras[i]);
//        } catch (ArrayIndexOutOfBoundsException e) {
        } catch (Exception e) {
            System.err.println("Esse índice não existe no vetor");
            System.err.println(e.getStackTrace());
        }
    }
}
