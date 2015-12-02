<?php

class Animal {
private $name, $age;
public static $totalAnimal = 0;

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
        }

public function __destruct() {
       self::$totalAnimal -= 1;
   }


 public function copy(animal $animal) {
        $totalAnimal += 1;
        $this->name = $animal->name;
        $this->age = $animal->age;
    }

public function __toString() {
    return sprintf(" (name %s,  age %s)", $this->name, $this->age);
}

};

$dog = new animal("Bob", 6);


echo $dog . PHP_EOL;


echo animal::$totalAnimal;

    return 0;
?>
}