#pragma once
#include <iostream>
#include <vector>
#include <map>
#include "buildings.hpp"
#include "company.hpp"

using namespace std;

class Company{
	private:
        std::string _name;
        int _cash;
        std::vector<Building*> ownedBuildings;
        std::map<int, Building*> buildingslist;

    public:
        Company(std::string name, int cash = 0);
        std::string getName (void);
        Building* criabuilding(int tipo, std::string objnome);
        void listBuildings();
        int getcash (void);
        int addcash (int value);
        int subcash (int value);
        int setcash (int value);

};