#include <iostream>
#include <string>
using namespace std;

class CtaBancaria{
private:
	string nombre;
	double saldo;

public:
	//Inicializacion de variables
	void setNombre(string n){
		nombre = n;
	}	
	string getNombre(){
		return nombre;
	}
	void setSaldo(double s){
		saldo = s;
	}
	double getSaldo(){
		return saldo;
	}
	
	//Metodos
	void depositar(double d){
		saldo += d;
		cout << "Tu saldo ahora es de $" << saldo << endl;
	}
	void retirar(double r){
		saldo -= r;
		cout << "Tu saldo ahora es de $" << saldo <<  endl;
	}
	void muestra(){
		
		cout << "Tu saldo es de $" << saldo << endl;
	}
};


int main(){
	double saldo,depo,reti;
	string nombre;
	CtaBancaria miCuenta;
	
	cout << "Ingresa el nombre del titular de la cuenta: " << endl;
    cin >> nombre;
    cout << "Ingresa el saldo de tu cuenta: " << endl;
    cin >> saldo;
    miCuenta.setNombre(nombre);
    miCuenta.setSaldo(saldo);
    
    cout << "Ingresa la cantidad a depositar en la cuenta: " << endl;
    cin >> depo;
    miCuenta.depositar(depo);
    
    cout << "Ingresa la cantidad a retirar: " << endl;
    cin >> reti;
    miCuenta.retirar(reti);
    
    miCuenta.muestra();
	
	return 0;
}
