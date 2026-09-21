package array;

import java.util.ArrayList;

public class teste {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Integer> lista = new ArrayList<Integer>();
		
		Integer a=9;
		Integer b=2;
		Integer c=1;
		
		
		lista.add(a);
		lista.add(b);
		lista.add(c);
		
		lista.remove(b);
		
		System.out.println(lista.size());
		System.out.println(lista.isEmpty());
		System.out.println(lista.contains(b));
		lista.remove(b);
		System.out.println(lista.contains(b));
		
//		while(lista.iterator().hasNext()) {
//			System.out.println(lista.iterator().next());
//		}
		
		for (Integer integer : lista) {
			System.out.println(integer.toString());
		}
		
		System.out.println();
		
	}

}
