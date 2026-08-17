package polimorfismo;

public class Main {

	public static void main(String[] args) {
		
		
		
//		Player p = new Player();
//		p.mostrarPoder();
//		
//		Mago m = new Mago();
//		m.mostrarPoder();
//		
//		Clerigo c = new Clerigo();
//		c.mostrarPoder();
//		
//		Guerreiro g = new Guerreiro();
//		g.mostrarPoder();
		
	Player players[] = new Player[4];
		
		players[0] = new Guerreiro("guerreiro");
		
		
		players[1] = new Mago("mago");
		
		
		players[2] = new Clerigo("clerigo");
		
		players[3] = new Guerreiro("guerreiro 2");
		
		for(int i =0;i<players.length;i++) {
			players[i].mostrarPoder();
			System.out.println(players[i].getClass());
			
		}

	}

}
