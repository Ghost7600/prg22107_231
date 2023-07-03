#include <iostream>
#include "buildings.hpp"
#include "company.hpp"

Company::Company(std::string name, int cash)
{
     _name = name;
     _cash = cash;
     cout << "Company (" << this << ") constructed!" << endl;
     cout << "Cash = "<< (this -> _cash) << endl;
}


Building* Company::criabuilding(int tipo, std::string objnome)
{
    Building * tmp = new Building(tipo,objnome);
    cout << "Building created. Building ID:" << tmp->uniqueID();
    buildingslist[tmp->uniqueID()] = tmp;
//     ownedBuildings.push_back(tmp);
    return tmp;
};

void Company::listBuildings(){
    int i=1;
    while (i <= buildingslist.size()){
        Building* cbuilding = buildingslist[i];
        cout<<cbuilding->uniqueID()<<" ";
        cout<<cbuilding->nome()<<"\n"; 
        i++;
    }
     
};

int Company::getcash (void){return _cash;};

std::string Company::getName (void){return _name;};

int Company::addcash (int value){_cash = _cash + value; return _cash;};

int Company::subcash (int value){_cash = _cash - value; return _cash;};

int Company::setcash (int value){_cash = value; return _cash;};