<?php

class Animal {
private $name, $age, $ID;
public static $totalAnimal = 0;
public static $id = 0;

private function validate($value) {
            if ( is_int($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }


public function __construct($name, $age) {
        $this->age = $this->validate($age);
        $this->name = $name;
        self::$totalAnimal += 1;
        self::$id += 1;
        $this->ID = self::$id;
        }

public function __destruct() {
       self::$totalAnimal -= 1;
   }


 public function copy(animal $animal) {
        self::$totalAnimal += 1;
        self::$id += 1;
        $this->ID = self::$id;
        $this->name = $animal->name;
        $this->age = $animal->age;
    }

public function __toString() {
    return sprintf(" (name %s,  age %s, ID %s)", $this->name, $this->age, $this->ID);
}

};

$dog = new animal("Bob", 6);


echo $dog . PHP_EOL;


echo animal::$totalAnimal . PHP_EOL;;
echo animal::$id . PHP_EOL;;

    return 0;
?>
}