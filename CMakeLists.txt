cmake_minimum_required(VERSION 3.17)
project(tsu_pattern_builder)

set(CMAKE_CXX_STANDARD 14)

add_executable(tsu_pattern_builder main.cpp Animal.cpp Animal.h IAnimalBuilder.cpp IAnimalBuilder.h
        Kid.cpp Kid.h Kitten.cpp Kitten.h KittenBuilder.cpp KittenBuilder.h Monkey.cpp Monkey.h
        MonkeyBuilder.cpp MonkeyBuilder.h)