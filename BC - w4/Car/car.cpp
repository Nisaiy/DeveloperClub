#include <iostream>
#include "Point.h"
#include "Car.h"


        Car::Car(double capacity, double consumption, const Point& location, const std::string& model) :
        fuelCapacity(capacity),
        fuelConsumption(consumption),
        location(location),
        model(model),
        fuelAmount(0)
        {}

        Car::~Car(){}

        double Car::getFuelAmount() const{
            return this->fuelAmount;

        }
        double Car::getFuelCapacity() const{
            return this->fuelCapacity;

        }
        double Car::getFuelConsumption() const{
            return this->fuelConsumption;

        }
        const Point& Car::getLocation() const{
            return this->location;

        }
        const std::string& Car::getModel() const{
            return this->model;

        }

        void Car::drive(const Point& destination) {
        double canGet;
        double distance;

        distance = location.distance(destination);
        canGet = distance * fuelConsumption;
        if ( canGet > fuelAmount ) {
            throw OutOfFuel();
        }
        fuelAmount-=canGet;
        location = destination;
        }


        void Car::drive(double x, double y){
            drive(Point(x,y));
        }

        void Car::refill(double fuel){
            double NewFuelAmount = fuelAmount;

            NewFuelAmount += fuel;
            if (NewFuelAmount > fuelCapacity) {
                throw ToMuchFuel();
            }
            fuelAmount = NewFuelAmount;
        }

        std::ostream& operator<<(std::ostream& out, const Car& car) {
            out <<"fuel Capacity " << car.getFuelCapacity() << std::endl;
            out <<"consumption " << car.getFuelConsumption() << std::endl;
            out <<"fuel Amount " << car.getFuelAmount() << std::endl;
            out <<"location " << car.getLocation();
            out <<"model " << car.getModel() << std::endl;
        }