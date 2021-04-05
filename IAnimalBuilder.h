//
// Created by Александр Мангазеев on 05.04.2021.
//

#ifndef TSU_PATTERN_BUILDER_IANIMALBUILDER_H
#define TSU_PATTERN_BUILDER_IANIMALBUILDER_H

#include "Animal.h"

class IAnimalBuilder {
public:
//    Animal* aAnimal;
    std::shared_ptr<Animal> aAnimal;
    virtual void BuildAnimalHeader()=0;
    virtual void BuildAnimalBody() = 0;
    virtual void BuildAnimalLeg() = 0;
    virtual void BuildAnimalArm() = 0;
    virtual void BuildAnimalTail() = 0;
    virtual ~IAnimalBuilder();


};


#endif //TSU_PATTERN_BUILDER_IANIMALBUILDER_H
