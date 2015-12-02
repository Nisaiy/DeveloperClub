#include <iostream>
#include "paper.h"
#include "pen.h"
#include <string>

int main() {

    Paper a = 10;
    Pen b = 10;

    b.write(a, "       ");

    a.show();


    b.write(a, "                                   ");

    a.show();
    


    return 0;
}