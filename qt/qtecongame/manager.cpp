/*
 * manager.cpp
 *
 *  Created on: 17 de mai. de 2023
 *      Author: Kenner
 */

#include <iostream>
#include "manager.hpp"

void Manager::esperaAcao(){
    int escolha;
    cout<<"\n Escolha a acao: \n 0 - SAIR \n 1 - Criar Building \n 2 - Listar Buildings";
    cin>>escolha;
    switch(escolha){
    case(0):
        break;
    case(1):
    {
        int x,y,tamanho;
        std::string nome;
        cout<<"Enter object name: ";
        cin>>nome;
        cout<<"Enter object posx: ";
        cin>>x;
	    cout<<"Enter object posy: ";
        cin>>y;
	    cout<<"Enter object size: ";
        cin>>tamanho;
        this->criabuilding(nome,x,y,tamanho);
    break;
    }
    case (2):
    {
        listBuildings();
    }
    default:
    cout<<"\n Escolha não reconhecida \n ";
    break;
    }

};

void Manager::criabuilding(std::string objnome, int x,int y, int objsize)
{
    Building * tmp = new Building(x,y,objsize,objnome);
    buildinglist[tmp->uniqueID()] = tmp;
};

Building* Manager::getBuilding(int id){
    return buildinglist[id];
}

void Manager::listBuildings(){
    cout<<buildinglist[1]->uniqueID();
    cout<<buildinglist[1]->nome();
    cout<<buildinglist[2]->uniqueID();
    cout<<buildinglist[2]->nome();
    cout<<buildinglist[3]->uniqueID();
    cout<<buildinglist[3]->nome();    
}



