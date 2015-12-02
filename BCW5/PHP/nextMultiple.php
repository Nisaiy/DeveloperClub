
<?php
    $divident = (int)fgets(STDIN);
    $divider = (int)fgets(STDIN);

    echo ceil($divident/$divider) * $divider;
    ?>