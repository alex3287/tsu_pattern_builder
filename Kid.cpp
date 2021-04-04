//
// Created by Александр Мангазеев on 05.04.2021.
//

#include "Kid.h"

void Kid::MakeAnimal(IAnimalBuilder *aAnimalBuilder) {
        aAnimalBuilder->BuildAnimalHeader();
        aAnimalBuilder->BuildAnimalBody();
        aAnimalBuilder->BuildAnimalLeg();
        aAnimalBuilder->BuildAnimalArm();
        aAnimalBuilder->BuildAnimalTail();
}
