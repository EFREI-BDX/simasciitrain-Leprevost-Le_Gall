cmake_minimum_required(VERSION 3.24.2)
project(simasciitrain2)

set(CMAKE_CXX_STANDARD 20)

add_executable(simasciitrain2 main.cpp
        ITrain.h
        Train.cpp
        Train.h
        TypeWagon.cpp
        TypeWagon.h
        AbstractWagon.cpp
        AbstractWagon.h
        TrainElement.h
        AbstractLocomotive.cpp
        AbstractLocomotive.h
        TypeLocomotive.cpp
        TypeLocomotive.h
        ElectricLocomotive.cpp
        ElectricLocomotive.h
        GasolineLocomotive.cpp
        GasolineLocomotive.h
        FreightWagon.cpp
        FreightWagon.h
        PassengerWagon.cpp
        PassengerWagon.h
        UtilityWagon.cpp
        UtilityWagon.h Wagons.cpp Wagons.h)
