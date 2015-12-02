	package Vector;


public class Vector {
	
	private double x;
	private double y;
	    
	public Vector(double x, double y) {
		this.setX(x);
		this.setY(y);
	}
	
	public Vector() {
		this(0,0);
	}
	
	public double getX() {
		return x;
	}
	
	public void setX(double x) {
		this.x = x;
	}
	
	public double getY() {
		return y;
	}
	
	public void setY(double y) {
		this.y = y;
	}
	
	public double len(){
		return Math.hypot(this.x, this.y);
	}
	
	public void increm (Vector other){
		this.x += other.x;
		this.y += other.y;
	}
	
	public Vector sum(Vector other){
		Vector a = this;
		a.increm(other);	
		return a;
	}
	
	public void decr (Vector other){
		this.x -= other.x;
		this.y -= other.y;
	}
	
	public Vector dif(Vector other){
		Vector a = this;
		a.decr(other);
		
		return a;
	}
	
	public boolean equal(Vector other){
		
		return this.x == other.x && this.y == other.y;
	}
	public void print(){
		System.out.println("("+this.x+";"+this.y+")");
	}
	}
