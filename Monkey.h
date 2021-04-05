//
// Created by Александр Мангазеев on 05.04.2021.
//

#ifndef TSU_PATTERN_BUILDER_MONKEY_H
#define TSU_PATTERN_BUILDER_MONKEY_H

#include <iostream>
#include "Animal.h"
#include <memory>

class Monkey: public Animal {

public:
    void Eat();
    virtual std::shared_ptr<Animal> clone() const override;
};


#endif //TSU_PATTERN_BUILDER_MONKEY_H
