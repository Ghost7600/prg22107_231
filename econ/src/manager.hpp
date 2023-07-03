#pragma once
#include <iostream>
#include <vector>
#include <map>
#include "buildings.hpp"
#include "company.hpp"

    /*struct objeto{
        Building* ponteiro;
        std::string nome;
    };*/

class Manager{

    private:
    std::vector<Company*> companylist;
    int _chosencompany;
    // int _escolha;

    std::map<int, Building*> buildinglist;
    //Building* _bdptr;
    public:
        void criabuilding( int _type, std::string objnome);
        void esperaAcao();
        Building* getBuilding(int id);
        void listBuildings();
        void passarturno();
};
