<?php
    function arrayScan($file, $array, $limit) {
         $array =  str_split (fread($file, $limit));
         return count($array) ;
    }



    $file = fopen("Task.in", "rb");

    $array = array();
    $limit = 4;

    echo arrayScan($file, $array, $limit);
    fclose($file);

?>