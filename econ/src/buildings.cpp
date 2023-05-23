/*
 * buildings.cpp
 *
 *  Created on: 4 de mai. de 2023
 *      Author: kenner
 */

#include <iostream>

using namespace std;

class BuildingID{
	private:
		static int newID; //estática da classe para garantir id unico para cada obj

  public:

    // int BuildingID::getID(){    //chamando função estática
    //     return newID++;
    // }

    static int getnewID (void){
      return newID++;
    }
};

BuildingID::newID = 0;


class Building {

  private:
    //static int newID =0; //estática da classe para garantir id unico para cada obj
    int uniqueID;
    int size;
    int location[2];
    std::string _nome;

  public:
    Building(int x ,int y, int objsize, std::string objnome){
        uniqueID = BuildingID::getnewID();
        size = objsize;
        location[0] = x;
        location[1] = y;
        _nome = objnome;
    	cout << "building (" << this << ") constructed!" << endl;
    	cout << "UID = "<< (this -> uniqueID) << endl;
    }

};
