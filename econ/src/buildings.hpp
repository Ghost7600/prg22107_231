#pragma once
#include <iostream>
using namespace std;


class IDGenerator {
  private:
	  static int _counter; //estática da classe para garantir id unico para cada obj
  public:
    static int getnewID();
};



class Building {

  private:
    //static int newID =0; //estática da classe para garantir id unico para cada obj
    int _uniqueID;
    int _type; // 1 para produtor, 2 para consumidor, 3 para ambos.
    int _size;
    int _location[2];
    std::string _nome;

  public:
    Building(int type, std::string objnome);
    int uniqueID() { return _uniqueID; }
    std::string nome(){return _nome;}
    void produce();
};