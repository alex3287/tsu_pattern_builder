//
// Created by Александр Мангазеев on 05.04.2021.
//

#include "MonkeyBuilder.h"

//MonkeyBuilder::MonkeyBuilder() {
//    aAnimal = new Monkey();
//}

MonkeyBuilder::MonkeyBuilder() {
    aAnimal = std::make_shared<Monkey>();
}


void MonkeyBuilder::BuildAnimalHeader() {
    aAnimal->Head = "Moneky's Head has been built";
}

void MonkeyBuilder::BuildAnimalBody() {
    aAnimal->Body = "Moneky's Body has been built";
}

void MonkeyBuilder::BuildAnimalLeg() {
    aAnimal->Leg = "Moneky's Leg has been built";
}

void MonkeyBuilder::BuildAnimalArm() {
    aAnimal->Arm = "Moneky's Arm has been built";
}

void MonkeyBuilder::BuildAnimalTail() {
    aAnimal->Tail = "Moneky's Tail has been built";
}
