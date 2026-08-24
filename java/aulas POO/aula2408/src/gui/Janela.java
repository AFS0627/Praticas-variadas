package gui;

import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class Janela extends JFrame{

	public Janela() {
		setSize(300, 400);
		JPanel p = new JPanel();
		 p.addMouseListener(new Painel());
		add(p);
		JTextField texto = new JTextField(10);
		JButton b = new JButton("ok");
		p.add(texto);
		p.add(b);
		
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
	}
	

//	@Override
//	public void mouseClicked(MouseEvent e) {
//		// TODO Auto-generated method stub
//		System.out.println(e.getX() + " " + e.getY());
//	}
//
//	@Override
//	public void mousePressed(MouseEvent e) {
//		// TODO Auto-generated method stub
//		System.out.println(e.getX() + " " + e.getY());
//		
//	}
//
//	@Override
//	public void mouseReleased(MouseEvent e) {
//		// TODO Auto-generated method stub
//		System.out.println(e.getX() + " " + e.getY());
//	}
//
//	@Override
//	public void mouseEntered(MouseEvent e) {
//		// TODO Auto-generated method stub
//		System.out.println(e.getX() + " " + e.getY());
//	}
//
//	@Override
//	public void mouseExited(MouseEvent e) {
//		// TODO Auto-generated method stub
//		System.out.println(e.getX() + " " + e.getY());
//	}
//	
	
}
