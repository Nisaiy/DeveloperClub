package Unit;



public class Unit {
	
	private int damage;
	private int hitPoints;
	private int hitPointsLimit;
	private String name;
	
	
	public Unit(String name, int hp, int dmg){
		this.damage = dmg;
		this.hitPointsLimit = hp;
		this.name = name;
	    this.hitPoints = hitPointsLimit;
	    }

	private void ensureIsAlive() throws UnitIsDead{
	       if ( hitPoints == 0 ) {
	           throw new UnitIsDead ();
	       }
	    }

	public int getDamage() {
	        return this.damage;
	    }
	public int getHitPoints() {
	        return this.hitPoints;
	    }
	public int getHitPointsLimit() {
	        return this.hitPointsLimit;
	    }
	    String getName(){
	        return this.name;
	    }

	    public void addHitPoints(int hp) {
	        try {
	        ensureIsAlive();
	        int currentHitPoint = this.hitPoints;

	        currentHitPoint += hp;

	        if (currentHitPoint > hitPointsLimit) {
	            this.hitPoints = hitPointsLimit;
	        } else {
	            this.hitPoints =  currentHitPoint;
	        }
	        } catch ( Exception UnitIsDead) {
	        	System.out.println( "Cant Heal dead unit");
	        }


	    }
	    public void takeDamage(int dmg) {
	        int currentHitPoint = this.hitPoints;

	        currentHitPoint -= dmg;
	        if (currentHitPoint <= 0) {
	            currentHitPoint = 0;
	        } 
	        this.hitPoints = currentHitPoint;

	    }

	    public void attack(Unit enemy) {

	        try {
	        ensureIsAlive();
	        enemy.takeDamage(this.damage);
	        enemy.counterAttack(this);
	        } catch (Exception UnitIsDead) {
	        	System.out.println ("my target is dead");
	        }
	    }
	    public void counterAttack(Unit enemy) {
	        try {
	        ensureIsAlive();
	        this.takeDamage(enemy.damage/2);
	        } catch (Exception UnitIsDead) {
	        	System.out.println ("this unit is dead");
	        }
	    }

	    public void print(){
			System.out.println("unit "+this.name+"\n"
								+"damage " + this.damage+"\n"
								+"hit points " + this.hitPoints+ "\n"
								+"Max HP " + this.hitPointsLimit);
		}

}
