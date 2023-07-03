#pragma once
#include <iostream>
#include <vector>
#include "buildings.hpp"
#include "company.hpp"

using namespace std;

class Company{
	private:
        std::string _name;
        int _cash;
        std::vector<Building*> ownedBuildings[];

    public:
        Company(std::string name, int cash = 0);
        std::string getnome (void);
        int getcash (void);
        int addcash (int value);
        int subcash (int value);
        int setcash (int value);

};