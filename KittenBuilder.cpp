//
// Created by Александр Мангазеев on 05.04.2021.
//

#include "KittenBuilder.h"

KittenBuilder::KittenBuilder() {
    aAnimal = new Kitten();
}

void KittenBuilder::BuildAnimalHeader() {
    aAnimal->Head = "Kitten's Head has been built";
}

void KittenBuilder::BuildAnimalBody() {
    aAnimal->Body = "Kitten's Body has been built";
}

void KittenBuilder::BuildAnimalLeg() {
    aAnimal->Leg = "Kitten's Leg has been built";
}

void KittenBuilder::BuildAnimalArm() {
    aAnimal->Arm = "Kitten's Arm has been built";
}

void KittenBuilder::BuildAnimalTail() {
    aAnimal->Tail = "Kitten's Tail has been built";
}
