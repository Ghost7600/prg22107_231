#pragma once
#include <iostream>
#include "buildings.hpp"
#include <map>

    /*struct objeto{
        Building* ponteiro;
        std::string nome;
    };*/

class Manager{

    private:
    std::map<int, Building*> buildinglist;
    //Building* _bdptr;
    public:
        void criabuilding( std::string objnome,int x = 1 ,int y=1, int objsize=1);
        void esperaAcao();
        Building* getBuilding(int id);
        void listBuildings();
};
