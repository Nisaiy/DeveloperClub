
<?php
function factorial($numb) {
    if ($numb > 1) {
        return $numb * (factorial($numb-1));;
    }
    if ( $numb < 0 ) {
        return -1;
    }
    return 1;
}
    ?>