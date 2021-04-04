//
// Created by Александр Мангазеев on 05.04.2021.
//

#include "Animal.h"

void Animal::ShowMe() {
    { std::cout<<Head<<std::endl;
    std::cout<<Body<<std::endl;
    std::cout<<Leg<<std::endl;
    std::cout<<Arm<<std::endl;
    std::cout<<Tail<<std::endl;
    Eat();
    }
}
