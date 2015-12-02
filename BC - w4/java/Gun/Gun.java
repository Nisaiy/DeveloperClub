package Gun;


public class Gun {
	private int amount;
	private int capacity;
	private boolean isReady;
	private String model;
	private int totalShots;
	
	
   Gun( String model, int capacity){
	   this.capacity = capacity;
	   this.model = model;
	   this.amount = 0;
	   this.totalShots = 0;
	   this.isReady = false;   
    	
    }

    int getAmount() {
        return this.amount;
    }
    int getCapacity() {
        return this.capacity;
    }
    boolean ready() {
        return this.isReady;
    }
    
    String getModel() {
        return this.model;
    }
    int getTotalShots() {
        return this.totalShots;
    }

    void prepare(){
        isReady = !isReady;
    }

    void reload(){
        this.amount = capacity;
    }
    void shoot() throws NotReady, outOfRounds {
        if (isReady == false) {
            throw new NotReady ();
        }
        if (amount == 0) {
            throw new outOfRounds();
        }
        amount -=1;
        totalShots +=1;
        System.out.println("Bang!");
    }
    
    public void print(){
		System.out.println("model "+this.model+"\n"
							+"capacity " + this.capacity+"\n"
							+"amount " + this.amount+ "\n"
							+"ready " + this.isReady+ "\n" 
							+"totalShots " +this.totalShots);
	}
}
