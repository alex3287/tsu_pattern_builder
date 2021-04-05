//
// Created by Александр Мангазеев on 05.04.2021.
//

#include <iostream>
#include "IAnimalBuilder.h"
#include "Kid.h"
#include "MonkeyBuilder.h"
#include "KittenBuilder.h"
#include "Animal.h"
#include "Kitten.h"


int main(){
    Kid aKid;
    aKid.Name = "Elizabeth";
    IAnimalBuilder *builderA = new MonkeyBuilder();
    aKid.MakeAnimal(builderA);
    builderA->aAnimal->ShowMe();
    IAnimalBuilder *builderB = new KittenBuilder();
    aKid.MakeAnimal(builderB);
    builderB->aAnimal->ShowMe();

    std::cout<<"\n\n------------Prototype tests---------------\n"<<std::endl;

//  ТЕСТИРУЮ НА КОШЕЧКАХ
    std::cout<<"test cats"<<std::endl;
    auto cat_1 = builderB->aAnimal;
    auto cat_2 = cat_1->clone();
    auto cat_3 = cat_1->clone();
    auto cat_4 = cat_1->clone();
    auto cat_5 = cat_1->clone();
    cat_2->Arm += " #my test";  // добавил чтобы было сразу же видно, то что добавляется к объекту
    cat_3->Body += " #my test";
    cat_4->Leg += " #my test";
    cat_5->Tail += " #my test";;
    cat_2->ShowMe();
    cat_3->ShowMe();
    cat_4->ShowMe();
    cat_5->ShowMe();

//  ТЕСТИРУЮ НА ОБЕЗЬЯНАХ
    std::cout<<"\n\ntest monkey\n"<<std::endl;
    auto monkey_1 = builderA->aAnimal;
    auto monkey_2 = monkey_1->clone();
    auto monkey_3 = monkey_1->clone();
    auto monkey_4 = monkey_1->clone();
    auto monkey_5 = monkey_1->clone();
    monkey_2->Arm += " #my test";  // добавил чтобы было сразу же видно, то что добавляется к объекту
    monkey_3->Body += " #my test";
    monkey_4->Leg += " #my test";
    monkey_5->Tail += " #my test";;
    monkey_2->ShowMe();
    monkey_3->ShowMe();
    monkey_4->ShowMe();
    monkey_5->ShowMe();

    return 0;
}