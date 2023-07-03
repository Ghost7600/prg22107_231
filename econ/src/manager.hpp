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
    std::vector<Company*> companieslist;
    int _chosencompany;
    Company* selectedCompany;
    // int _escolha;
    std::map<int, Building*> allbuildingslist;
    //Building* _bdptr;
    size_t criarCompany(std::string nome);
    void selectCompany(int index);
    void criabuilding( int _type, std::string objnome);

    public:
    void esperaAcao();
    Company* getcompany(int id);
    void listCompanies();
    void passarturno();
};
