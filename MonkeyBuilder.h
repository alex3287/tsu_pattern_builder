//
// Created by Александр Мангазеев on 05.04.2021.
//

#ifndef TSU_PATTERN_BUILDER_MONKEYBUILDER_H
#define TSU_PATTERN_BUILDER_MONKEYBUILDER_H

#include "IAnimalBuilder.h"
#include "Monkey.h"
#include "BasePrototype.h"

class MonkeyBuilder: public IAnimalBuilder{
public:
    MonkeyBuilder();
    void BuildAnimalHeader();
    void BuildAnimalBody();
    void BuildAnimalLeg();
    void BuildAnimalArm();
    void BuildAnimalTail();
};


#endif //TSU_PATTERN_BUILDER_MONKEYBUILDER_H
