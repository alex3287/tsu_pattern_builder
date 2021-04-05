//
// Created by Александр Мангазеев on 05.04.2021.
//

#include "Kitten.h"

void Kitten::Eat() {
        std::cout<<"Since I am Kitten, I like to eat kitten food";
}

shared_ptr<Animal> Kitten::clone() const {
    return std::make_shared<Kitten>(*this);
}

