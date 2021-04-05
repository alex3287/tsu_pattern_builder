//
// Created by Александр Мангазеев on 05.04.2021.
//

#ifndef TSU_PATTERN_BUILDER_ANIMAL_H
#define TSU_PATTERN_BUILDER_ANIMAL_H

#include <iostream>
#include <memory>


class Animal {
public:
    std::string Head;
    std::string Body;
    std::string Leg;
    std::string Arm;
    std::string Tail;
    // вспомогательный метод для демонстрации результата
    virtual void Eat() = 0;
    void ShowMe();
    virtual ~Animal() = default;
    // Пробую создать метод клонирования
    virtual  std::shared_ptr<Animal> clone() const = 0;
};


#endif //TSU_PATTERN_BUILDER_ANIMAL_H
