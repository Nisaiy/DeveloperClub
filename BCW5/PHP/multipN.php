
<?php
    $numb = (int)fgets(STDIN);
    $divider = (int)fgets(STDIN);
    $last = $numb - $numb % $divider;
    
    echo implode(' ', range(0, $last, $divider)) . PHP_EOL;
    ?>