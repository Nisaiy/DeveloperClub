package Date;

public class InvalidDate extends Exception{
	public String string;
	
	public InvalidDate (String string) {
		this.string = string;
	}
}

