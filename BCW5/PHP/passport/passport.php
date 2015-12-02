<?php
class Passport {
    public static $prevFirstChar = 'A', $prevSecondChar = 'A', $prevSerial = 0;

    private $name, $lastName, $date, $firstChar, $secondChar, $serial;

       public function __construct($name, $lastName, $day, $month, $year) {
        $this ->name = $name;
        $this ->$lastName = $lastName;
        $this ->date = new date ($day, $month, $year);

        $this->createNewSerial();
        }


            public function __get($name) {
            return $this->$name;
        }

            public function setNewSerial ($a, $b, $serial) {
        self::$prevFirstChar = $a;
        self::$prevSecondChar = $b;
        self::$prevSerial = $serial;
        validate();
    }
        public function validate(){
                if ( self::$prevFirstChar < 'A' || self::$prevFirstChar > 'Z') {
                    throw new  Exception ("WrongSerial");
                }
                if ( self::$prevSecondChar < 'A' || self::$self::$prevSecondChar > 'Z') {
                    throw new  Exception ("WrongSerial");
                }
                if ( self::$prevSerial > 999999 || self::$prevSerial < 0) {
                    throw new  Exception ("WrongSerial");
                }
            }


                public function creatNewSerial() {
        
        if (self::$prevSerial > 999999) {
            self::$prevSerial = 0;
            self::$prevSecondChar +=1;
            if (self::$prevSecondChar > 'Z') {
                self::$prevSecondChar = 'A';
                self::$prevFirstChar+=1;
                if (self::$prevFirstChar > 'Z') {
                    throw new  Exception ("WrongSerial");
                }
            }
        }
        $this->serial = self::$prevSerial;
        $this->firstChar = self::$prevFirstChar;
        $this->secondChar = self::$prevSecondChar;
        self::$prevSerial+=1;
    }

    public function __toString() {
    return sprintf(" (name %s, lastName %s, was born %s \n passport %s%s)", $this->name, $this->lastName, $this->date, $this->firstChar, $this->secondChar, $this->serial);
}
?>