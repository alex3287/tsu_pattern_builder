//
// Created by Александр Мангазеев on 05.04.2021.
//

#ifndef TSU_PATTERN_BUILDER_KID_H
#define TSU_PATTERN_BUILDER_KID_H

#include <iostream>
#include "IAnimalBuilder.h"

class Kid {
public:
    std::string Name;
// Построитель реализует процесс создания объекта животного; // после завершения этого процесса объект
// будет рассматриваться как готовый к использованию объект.
    void MakeAnimal(IAnimalBuilder* aAnimalBuilder) ;
};


#endif //TSU_PATTERN_BUILDER_KID_H
