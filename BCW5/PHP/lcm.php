<?php 
    function gcd($a, $b) {
        if ( $b == 0 ) {
            return $a;
        }
        return gcd($b, $a%$b);
    }


    $file = fopen("Task.in", "r");
    $file1 = fopen("Task.out", "w");

    $str = fgets($file);

    $numbers = explode(' ', $str);


    $a = $numbers[0] / gcd($numbers[0], $numbers[1]) * $numbers[1];

    fwrite($file1, $a);

    fclose($file);
    fclose($file1);
?>