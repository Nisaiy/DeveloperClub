package Car;


public class Car {
	
	private double fuelAmount;
	private double fuelCapacity;
	private double fuelConsumption;
	private Point location;
	private String model;
	
    public Car(double capacity, double consumption,  Point location, String model){
    	this.fuelCapacity = capacity;
    	this.fuelConsumption = consumption;
    	this.location = location;
    	this.model = model;
    	this.fuelAmount = 0;
    }


    public double getFuelAmount() {
        return this.fuelAmount;

    }
    public double getFuelCapacity() {
        return this.fuelCapacity;
        }
    public double getFuelConsumption() {
        return this.fuelConsumption;
    }
    
    public Point getLocation() {
        return this.location;
        }
        
    public String getModel() {
        return this.model;

    }

    public void drive( Point destination) throws OutOfFuel{
    double canGet;
    double distance;

    distance = location.distance(destination);
    canGet = distance * fuelConsumption;
    if ( canGet > fuelAmount ) {
        throw new OutOfFuel();
    }
    fuelAmount-=canGet;
    location = destination;
    }


    public void drive(double x, double y)throws OutOfFuel {
        drive(new Point(x,y));
    }


	public void refill(double fuel) throws ToMuchFuel{
        double NewFuelAmount = fuelAmount;

        NewFuelAmount += fuel;
        if (NewFuelAmount > fuelCapacity) {
            throw new ToMuchFuel();
        }
        fuelAmount = NewFuelAmount;
    }
    
    
    public void print(){
		System.out.println("fuel Capacity "+ this.fuelCapacity+"\n"
							+"consumption " + this.fuelConsumption+"\n"
							+"fuel Amount " + this.fuelAmount+ "\n"
							+"location " + this.location + "\n"
							+"model " + this.model);
	}


}
