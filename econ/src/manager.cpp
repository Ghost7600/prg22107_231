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
    cout<<"\n Escolha a acao: \n 0 - SAIR \n 1 - Criar Building \n";
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
        this->criabuilding(x,y,tamanho,nome);
    break;
    }
    default:
    cout<<"\n Escolha não reconhecida \n ";
    break;
    }

};

struct objeto Manager::criabuilding(int x ,int y, int objsize, std::string objnome){
    objeto obj1;
    _bdptr = new Building(x,y,objsize,objnome);
    obj1.nome = objnome;
    obj1.ponteiro = _bdptr;
    return obj1;
};

