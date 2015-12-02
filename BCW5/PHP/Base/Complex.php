<?php
class Complex {
private $real, $imaginary;

        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        public function __construct($real=0, $imaginary=0) {
            $this->real = $this->validate($real);
            $this->imaginary = $this->validate($imaginary);
        }

        public function __get($name) {
            return $this->$name;
        }

        function sum( Complex $b) {
    $this->real = $this->real + $b->real;
    $this->imaginary = $this->imaginary + $b->imaginary;
    }

        function diff( Complex $b) {
    $this->real = $this->real - $b->real;
    $this->imaginary = $this->imaginary - $b->imaginary;
    }

        function mult( Complex $b) {
    $this->real = $this->real * $b->real;
    $this->imaginary = $this->imaginary * $b->imaginary;
    }

    public function __toString() {
        if ( $this->imaginary > 0) {
            return sprintf("(%g, +%g)", $this->real, $this->imaginary);
        }
            return sprintf("(%g, %g)", $this->real, $this->imaginary);
        }

    }

       function compare($x, $y) {
        if ( $x == $y ) {
            echo $x . " is equal to " . $y . PHP_EOL;
        } else {
            echo $x . " is not equal to " . $y . PHP_EOL;
        }
    }





    $Complex = new Complex (5, 6);
    $Complex1 = new Complex(1, -4);

    echo $Complex . PHP_EOL;
    echo $Complex1 . PHP_EOL;

    echo ($Complex->diff($Complex1));
    echo compare($Complex, $Complex1);
    echo $Complex . PHP_EOL;
?>