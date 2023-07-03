/*
 * buildings.cpp
 *
 *  Created on: 4 de mai. de 2023
 *      Author: kenner
 */

#include <iostream>
#include "buildings.hpp"

using namespace std;

int IDGenerator::getnewID() {
      return ++_counter;
}

int IDGenerator::_counter = 0;


int BuildingID::getnewID (void){ //funções estáticas chamar com ::
  return ++_newID;
}

int BuildingID::_newID = 0;

Building::Building(int type, std::string objnome)
{
  _uniqueID = IDGenerator::getnewID();
  _type = type;
  _nome = objnome;
  cout << "building (" << this << ") constructed!" << endl;
  cout << "UID = "<< (this -> _uniqueID) << endl;
}

void Building::produce(){

}