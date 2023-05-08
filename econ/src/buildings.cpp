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

    BuildingID(){
      newID=0;
    }

    int getnewID (void){
      int uid = BuildingID::newID;
      uid++;
      BuildingID::newID = uid;
      return uid;
    }
};

BuildingID idindex;


class Building {

  private:
    //static int newID =0; //estática da classe para garantir id unico para cada obj
    int uniqueID;
    int size;
    int location[2];
    std::string _nome;

  public:
    Building(int x ,int y, int objsize, std::string objnome){
        uniqueID = idindex.getnewID();
        size = objsize;
        location[0] = x;
        location[1] = y;
        _nome = objnome;
    	cout << "building (" << this << ") constructed!" << endl;
    	cout << "UID = "<< (this -> uniqueID) << endl;
    }

};
