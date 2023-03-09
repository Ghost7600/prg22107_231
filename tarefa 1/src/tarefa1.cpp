#include <iostream>

using namespace std;

class conta {

  private:
    int _id;
    int _saldo;
    std::string _nome;

  public:
    conta(int saldo = 0){
        _saldo = saldo;
    	cout << "conta (" << this << ") constructed!" << endl;
//    	int x = conta.saldo;
    	cout << "saldo = "<< (this -> _saldo) << endl;

    }

    int deposit(int valor){
        cout << "depositando " <<  valor << endl;
    	_saldo = valor + _saldo;
    	cout << "saldo = " << (this -> _saldo) << endl;
    	return this -> _saldo;
    }

    int saldo(){
        cout << "saldo = " << (this -> _saldo) << endl;
    	return this -> _saldo;
    }

    int saque(int valor){
        cout << "sacando " << valor << endl;
        if (valor > _saldo){
            cout << "saldo insuficiente" << endl;
        }
        else{
            _saldo = _saldo - (valor*1.15);
            cout << "saldo = "<< (this -> _saldo) << endl;
        }

        return this->_saldo;
    }
};

class manager {
};

int main() {
    cout << "inicio" << endl;

    int valor1 = 1;
    int valor20 =20;
    int saldo = 30;

    conta jose(saldo);
    jose.saldo();
    jose.deposit(valor1);
    jose.saque(valor20);
    jose.saque(valor1);

	return 0;
};

