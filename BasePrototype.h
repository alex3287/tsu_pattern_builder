//
// Created by Александр Мангазеев on 05.04.2021.
//

#ifndef TSU_PATTERN_BUILDER_BASEPROTOTYPE_H
#define TSU_PATTERN_BUILDER_BASEPROTOTYPE_H


class BasePrototype {
public:
    virtual BasePrototype* clone() = 0;
    virtual void info() = 0;
    virtual ~BasePrototype() {}
};


#endif //TSU_PATTERN_BUILDER_BASEPROTOTYPE_H
