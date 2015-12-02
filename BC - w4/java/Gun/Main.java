package Gun;

public class Main {

	public static void main(String[] args) throws NotReady, outOfRounds {
		Gun a = new Gun("Gav", 5);
		
		a.prepare();
		a.reload();
		a.shoot();
		a.prepare();
		a.print();
	}

}
