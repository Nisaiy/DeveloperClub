package Complex;

public class Complex {
	private double real;
	private double imaginary;
	
	
	
public Complex(double real, double imaginary){
        this.real = real;
        this.imaginary = imaginary;
}
public Complex(){
    this(0,0);
}

public double getReal() {
        return this.real;
}
public double getImaginary(){
        return this.imaginary;
}

public boolean equal(Complex other) {
        return this.real == other.real && this.imaginary == other.imaginary;
}

public void increm (Complex other){
	this.real += other.real;
	this.imaginary += other.imaginary;
}

public Complex sum (Complex other){
	Complex a = this;
	a.increm(other);
        return a;
}

public void decr (Complex other){
	this.real += other.real;
	this.imaginary += other.imaginary;
}

public Complex dif ( Complex other){
	Complex a = this;
	a.decr(other);
        return a;
}


public Complex multip (Complex other) {
        Complex multip = this;

        multip.real *= other.real;
        multip.imaginary *= other.imaginary;

        return multip;
}

public void print(){
	System.out.println("("+this.real+";"+this.imaginary+"i"+")");
}

}
