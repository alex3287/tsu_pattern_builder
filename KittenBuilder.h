//
// Created by Александр Мангазеев on 05.04.2021.
//

#ifndef TSU_PATTERN_BUILDER_KITTENBUILDER_H
#define TSU_PATTERN_BUILDER_KITTENBUILDER_H

#include "IAnimalBuilder.h"
#include "Kitten.h"

class KittenBuilder: public IAnimalBuilder {
public:
    KittenBuilder();
    void BuildAnimalHeader();
    void BuildAnimalBody();
    void BuildAnimalLeg();
    void BuildAnimalArm();
    void BuildAnimalTail();
};


#endif //TSU_PATTERN_BUILDER_KITTENBUILDER_H
