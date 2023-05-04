/*
 * buildings.cpp
 *
 *  Created on: 4 de mai. de 2023
 *      Author: kenner
 */
class BuildingID{
	private:
		static int newID;
};

int BuildingID::newID = 0;

class Building {

  private:
    static int newUID;
    int uniqueID;
    int size;
    int location[2];
    std::string _nome;

  public:
    Building(int x;int y){
        uniqueID++;
        location[0] = x;
        location[1] = y;
    	cout << "building (" << this << ") constructed!" << endl;
    	cout << "UID = "<< (this -> uniqueID) << endl;
    }
};

int Building::newUID = 0;
