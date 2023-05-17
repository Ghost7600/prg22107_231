//============================================================================
// Name        : econ.cpp
// Author      : Kenner
// Version     :
// Copyright   : NCR
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "buildings.hpp"


int main() 
{
	int objsize,objposx,objposy;
 string fname,lname, objname;
    cout<<"Enter object name: ";
    cin>>objname;
    cout<<"Enter object posx: ";
    cin>>objposx;
	cout<<"Enter object posy: ";
    cin>>objposy;
	cout<<"Enter object size: ";
    cin>>objsize;
	Building buildingObj1 (objposx,objposy,objsize,objname);
    Building building2 (1,2,3,"predio 2");
    return 0;
}