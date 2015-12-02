    #include "unit.h"


    Unit::Unit(const std::string& name, int hp, int dmg) :
    name(name),
    hitPointsLimit(hp),
    damage(dmg)
    {
        this->hitPoints = hitPointsLimit;
    }
    Unit::~Unit(){}

    void Unit::ensureIsAlive() {
       if ( hitPoints == 0 ) {
           throw UnitIsDead();
       }
    }

    int Unit::getDamage() const{
        return this->damage;
    }
    int Unit::getHitPoints() const{
        return this->hitPoints;
    }
    int Unit::getHitPointsLimit() const{
        return this->hitPointsLimit;
    }
    const std::string& Unit::getName() const{
        return this->name;
    }

    void Unit::addHitPoints(int hp){
        try {
        ensureIsAlive();
        int currentHitPoint = this->hitPoints;

        currentHitPoint += hp;

        if (currentHitPoint > hitPointsLimit) {
            this->hitPoints = hitPointsLimit;
        } else {
            this->hitPoints =  currentHitPoint;
        }
        } catch (UnitIsDead) {
            std::cout << "Cant Heal dead unit" << std::endl;
        }


    }
    void Unit::takeDamage(int dmg) {
        int currentHitPoint = this->hitPoints;

        currentHitPoint -= dmg;
        if (currentHitPoint <= 0) {
            currentHitPoint = 0;
        } 
        this->hitPoints = currentHitPoint;

    }

    void Unit::attack(Unit& enemy) {

        try {
        ensureIsAlive();
        enemy.takeDamage(this->damage);
        enemy.counterAttack(*this);
        } catch (UnitIsDead) {
            std::cout << "my target is dead" << std::endl;
        }
    }
    void Unit::counterAttack(Unit& enemy) {
        try {
        ensureIsAlive();
        this->takeDamage(enemy.damage/2);
        } catch (UnitIsDead) {
            std::cout << "this unit is dead" << std::endl;
        }
    }

    std::ostream& operator<<(std::ostream& out, const Unit& unit) {
        out << "damage " <<unit.getDamage() << std::endl; 
        out << "hit Points " <<unit.getHitPoints() << std::endl; 
        out << "Max HP " <<unit.getHitPointsLimit() << std::endl; 
        out << "Unit " <<unit.getName() << std::endl; 
    }