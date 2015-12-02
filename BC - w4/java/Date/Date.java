package Date;

public class Date {
	private int day;
	private int month;
	private int year;
	
	public Date(int day, int month, int year) throws InvalidDate {
		this.day = day;
		this.month = month;
		this.year = year;
        validate(day, month, year);
        }
	
	
	public int getDay() {
		return day;
	}

	public int getMonth() {
		return month;
	}
	
	public int getYear() {
		return year;
	}
	
	public void validate(int day, int month, int year) throws InvalidDate {
    int chek;
    int LeapYear;

    if ( month > 12 || month < 1) {
        throw new InvalidDate ("invalid month");
    }

    LeapYear = this.year % 4;

    chek = (this.month % 2) ^ (this.month / 8);

        if ( chek == 1 ) {
            if (this.day > 31) {
                throw new InvalidDate ("invalid day");
            };
        } else if ( this.month == 2 ) {
            if ( LeapYear == 0) {
                if (this.day > 28) {
                    throw new InvalidDate("invalid day");
                }
            } else {
                if (this.day > 29) {
                    throw new InvalidDate("invalid day");
                }
            }
    } else {
            if (this.day > 30) {
                throw new InvalidDate("invalid day");
            }
        }
}
	
	
	public void print(){
		System.out.println("day "+this.day+"\n"+ "month " + this.month+"\n"+"year " + this.year);
	}

}
