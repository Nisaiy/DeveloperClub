<?php
    $divident = (int)fgets(STDIN);
    $divider = (int)fgets(STDIN);

    echo floor($divident/$divider) * $divider;
    ?>