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

int Company::getcash (void){return _cash;};

std::string Company::getnome (void){return _name;};

int Company::addcash (int value){_cash = _cash + value; return _cash;};

int Company::subcash (int value){_cash = _cash - value; return _cash;};

int Company::setcash (int value){_cash = value; return _cash;};