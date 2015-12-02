package Complex;


public class Main {

	public static void main(String[] args) {
		Complex a = new Complex(5, 10);
		Complex b = new Complex (2, 5);
		b.print();
		
		b.increm(a);
	

		
		a.print();
		b.print();

	}

}
