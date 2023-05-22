#pragma once
#include <iostream>
using namespace std;


class IDGenerator {
  private:
	  static int _counter; //estática da classe para garantir id unico para cada obj
  public:
    static int getnewID();
};


class BuildingID{
	private:
		static int _newID; //estática da classe para garantir id unico para cada obj 
  public:
    static int getnewID (void);
};

class Building {

  private:
    //static int newID =0; //estática da classe para garantir id unico para cada obj
    int _uniqueID;
    int _size;
    int _location[2];
    std::string _nome;

  public:
    Building(int x ,int y, int objsize, std::string objnome);
    int uniqueID() { return _uniqueID; }
    
};