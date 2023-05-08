//============================================================================
// Name        : econ.cpp
// Author      : Kenner
// Version     :
// Copyright   : NCR
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "buildings.cpp"
using namespace std;

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
    return 0;
}