//
// Created by netanel on 27/05/2020.
//

#include <stdio.h>
#include <iostream>
#include "doctest.h"


using namespace std;



TEST_CASE("Simple_Test"){
    for (int i = 0; i <100 ; ++i) {
        CHECK(i==i);
    }


}


