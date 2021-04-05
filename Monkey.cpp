//
// Created by Александр Мангазеев on 05.04.2021.
//

#include "Monkey.h"

void Monkey::Eat() {
    {
        std::cout<<"Since I am Monkey, I like to eat banana";
    }
}

std::shared_ptr<Animal> Monkey::clone() const {
    return std::make_shared<Monkey>(*this);
}
