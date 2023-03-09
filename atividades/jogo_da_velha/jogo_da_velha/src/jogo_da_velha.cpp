//============================================================================
// Name        : jogo_da_velha.cpp
// Author      : Kenner Marqueti Couto
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class player{

	std::string _nome;
	bool _xo;
	char _choice;
	int _score;
	bool _isturn;

public:

	 player (string nome = "player", bool xo = 0){
		_nome=nome;
		_xo=xo;
		cout << "player (" << this << ") created!" << endl;
	}

	string nome (string nome){
		 if (nome.empty()){
			 return this -> _nome;
		 } else{
		 _nome=nome;
		 return NULL;
		 }
	}

	bool getxo (){
			 return this -> _xo;
	}

	void setxo (bool xo){
		_xo = xo;
	}

	void setchoice(char choice){
		if (choice == 'a' || choice == 's' || choice == 'd' || choice == 'q' || choice == 'e' || choice == 'z' || choice == 'x' || choice == 'c') {
			_choice = choice;
		}
		else {
			cout << "Entrada inválida";
		}
	}



};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	char escolha;
	    cout << "Enter a character (a-i): ";
	    cin >> escolha;
	if (escolha >= 'a' && escolha <= 'i') {
	        // input is valid
	        cout << "You entered: " << escolha << endl;
	    } else {
	        // input is invalid
	        cout << "Invalid input." << endl;
	    }
	return 0;
};
