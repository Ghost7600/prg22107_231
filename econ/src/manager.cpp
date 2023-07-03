#include <iostream>
#include "manager.hpp"

Manager::Manager(void)
{
     selectedCompany=0;
}

void Manager::esperaAcao(){
    int escolha;
    cout<<"\n Chose action: \n 0 - EXIT     - NOT WORKING RN - PRESS CTRL+C INSTEAD!!! \n 1 - Create Building \n 2 - List Buildings \n 7 - List companies  \n 8 - Create Company \n 9 - Select Company \n ";
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
        cout<<"Enter building name: ";
        cin>>nome;
        cout<<"Enter 1 for producer, 2 for consumer or 3 for both:";
        cin>>tipo;
        this->criabuilding(tipo,nome);
        break;
    }
    case (2):
    {
        selectedCompany->listBuildings();
        break;
    }
    case (7):
    {
        listCompanies();
        break;
    }
    case (8):
    {
        std::string nome;
        cout<<"Enter company name: ";
        cin>>nome;
        int tmp = this->criarCompany(nome);   
        selectCompany(tmp);
        break;
    }

    case (9):
    {
        int i;
        Company* tmp;
        cout << "Enter desired Company Index. \n";
        cin >> i;
        selectCompany(i);
        break;
    }
    default:
        cout<<"\n Escolha não reconhecida \n ";
        break;
    }

};


void Manager::criabuilding(int tipo, std::string objnome)
{
    if (selectedCompany == nullptr){
        cout << "Building not created, please Choose a Valid Company.";
    }
    else {
    Building* tmp = selectedCompany->criabuilding(tipo, objnome);
    allbuildingslist[tmp->uniqueID()] = tmp;
    }
};

Company* Manager::getcompany(int id){
    return companieslist[id];
}

void Manager::selectCompany(int index){
    selectedCompany = companieslist.at(index);
    cout << "Selected " << selectedCompany->getName() << "\n";
    cout << "Selected Company Member = " << selectedCompany;
}

void Manager::listCompanies(){
 int i=0;
 cout << "INDEX             COMPANY NAME            MONEY \n";
 for (Company* company : companieslist) {
        cout<<i << "                    ";
        std::cout << company->getName() << "                    ";
        cout << company->getcash() << std::endl;
        i++;
    }
};

size_t Manager::criarCompany(std::string nome)
{
    Company * tmp = new Company(nome,1000);
    companieslist.push_back(tmp);
    size_t len = companieslist.size();
    return len-1;
}

void Manager::passarturno(){
};




