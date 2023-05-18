#pragma once
#include <iostream>
#include "buildings.hpp"
#include <set>

    struct objeto{
        Building* ponteiro;
        std::string nome;
    };

class Manager{

    private:
    std::set<Building> buildinglist;
    Building* _bdptr;
    public:
        struct objeto criabuilding(int x ,int y, int objsize, std::string objnome);
        void esperaAcao();
};