#include <iostream>
#include "manager.hpp"
void Manager::esperaAcao(){
    int escolha;
    cout<<"\n Chose action: \n 0 - EXIT \n 1 - Create Building \n 2 - List Buildings \n 8 - Create Company \n 9 - Select Company \n ";
    cin>>escolha;
    switch(escolha){
    case(0):
        cout<<"Saindo!";
        exit;
        break;
    case(1):
    {
        int tipo;
        std::string nome;
        cout<<"Enter object name: ";
        cin>>nome;
        cout<<"Enter 1 for producer, 2 for consumer or 3 for both:";
        cin>>tipo;
        this->criabuilding(tipo,nome);
        break;
    }
    case (2):
    {
        listBuildings();
        break;
    }

    case (8):
    {
        //criarcompany();   
        break;
    }

    case (9):
    {

    }
    default:
        cout<<"\n Escolha não reconhecida \n ";
        break;
    }

};

void Manager::criabuilding(int tipo, std::string objnome)
{
    Building * tmp = new Building(tipo,objnome);
    buildinglist[tmp->uniqueID()] = tmp;
};

Building* Manager::getBuilding(int id){
    return buildinglist[id];
}

void Manager::listBuildings(){
    int i=1;
    while (i < buildinglist.size()){
        cout<<buildinglist[i]->uniqueID()<<" ";
        cout<<buildinglist[i]->nome()<<"\n"; 
        i++;
    }
     
};

void Manager::passarturno(){
};




