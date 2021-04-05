//
// Created by Александр Мангазеев on 05.04.2021.
//

#ifndef TSU_PATTERN_BUILDER_KITTEN_H
#define TSU_PATTERN_BUILDER_KITTEN_H

#include <iostream>
#include "Animal.h"



using namespace std;


class Kitten: public Animal {
public:
    void Eat();
    shared_ptr<Animal> clone() const override;
};


#endif //TSU_PATTERN_BUILDER_KITTEN_H
