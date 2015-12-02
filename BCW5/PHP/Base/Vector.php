<?php

class Vector {

            private $x, $y;

        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        public function __construct($x=0, $y=0) {
            $this->x = $this->validate($x);
            $this->y = $this->validate($y);
        }

        public function __get($name) {
            return $this->$name;
        }

        public function __set($name, $value) {
            $this->$name = $this->validate($value);
        }

//////////////////////////////////////////////////////////////////////////////////////////////////////

public function len(){
    return hypot($this->x, $this->y);
}

    public function __toString() {
            return sprintf("(%g, %g)", $this->x, $this->y);
        }

        function sum( Vector $b) {
    $this->x = $this->x + $b->x;
    $this->y = $this->y + $b->y;
    }

        function diff( Vector $b) {
    $this->x = $this->x - $b->x;
    $this->y = $this->y - $b->y;
    }

    }

   function compare($x, $y) {
        if ( $x == $y ) {
            echo $x . " is equal to " . $y . PHP_EOL;
        } else {
            echo $x . " is not equal to " . $y . PHP_EOL;
        }
    }



    $vector1 = new Vector (5, 6);
    $vector2 = new Vector(1, 4);

    echo $vector1;

    echo ($vector1->diff($vector2));
    echo compare($vector1, $vector2);
    echo $vector1;
?>