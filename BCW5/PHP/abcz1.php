<?php


$a = (int) fgets(STDIN);
$b = (int) fgets(STDIN);

if ( $a <= $b ) {
        echo "alpha\n";
    } elseif  ($a < 0)  {
        echo "bravo\n";
    } elseif  ($b == 0) {
        echo "charlie\n";
    } else { echo "zulu\n";
    }
?>