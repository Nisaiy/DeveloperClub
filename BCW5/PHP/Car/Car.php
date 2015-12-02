<?php
// include 'point.php'
    class Car {

    private $fuelCapacity, $fuelConsumption, $location, $model, $fuelAmount;

    private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }


    private function valid_point(Point $value) {
        return $value;
    }

    public function __construct($fuelCapacity, $fuelConsumption, $location, $model, $fuelAmount) {
        $this->fuelCapacity = $this->validate($fuelCapacity);
        $this->fuelConsumption = $this->validate($fuelConsumption);
        $this->location = $this->valid_point($location);
        $this->model = $model;
        $this->fuelAmount = $this->validate($fuelAmount);
        }

    public function __get($name) {
            return $this->$name;
        }

    public function drive(Point $destination) {
        $canGet;
        $distance;

        $distance = $this->location->distance($destination);
        $canGet = $distance * $this->fuelConsumption;
        if ( $canGet > $this->fuelAmount ) {
            throw new Exception ("Need more fuel");
        }

        $this->fuelAmount-=$canGet;
        $this->location = $destination;
    }

        public function refill($fuel){
            $NewFuelAmount = $fuelAmount;

            $NewFuelAmount += validate($fuel);
            if ($NewFuelAmount > $fuelCapacity) {
                throw new Exception ("ToMuchFuel");
            }
            $fuelAmount = $NewFuelAmount;
        }

        public function __toString() {
                return sprintf("(fuel Capacity = %s, \n consumption = %s,\n location = %s, \n model = %s, \n fuel Amount = %s  \n)", $this->fuelCapacity, $this->fuelConsumption, $this->location,
                    $this->model, $this->fuelAmount);
            }
    }
?>