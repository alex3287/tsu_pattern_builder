//
// Created by Александр Мангазеев on 05.04.2021.
//

#include <iostream>
#include "IAnimalBuilder.h"
#include "Kid.h"
#include "MonkeyBuilder.h"
#include "KittenBuilder.h"


int main(){
    Kid aKid;
    aKid.Name = "Elizabeth";
    IAnimalBuilder *builderA = new MonkeyBuilder();
    aKid.MakeAnimal(builderA);
    builderA->aAnimal->ShowMe();
    IAnimalBuilder* builderB = new KittenBuilder();
    aKid.MakeAnimal(builderB);
    builderB->aAnimal->ShowMe();


    return 0;
}