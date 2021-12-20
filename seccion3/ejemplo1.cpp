#include<iostream>
using namespace std;
int main(){
	int numero, dato = 5;
	cout << "Digite un numero: " << endl;
	cin >> numero;
	if(numero == dato){
		cout << "El  numero es 5" <<endl;
	}else{
		cout << "no es 5" << endl;
	}
	if (numero != dato){
		cout << "Numero no es 5" << endl;
	}else{
		cout << "Es 5" << endl;
	}
	if(numero < dato){
		cout << "Menor a 5" << endl;
	}else{
		cout << "nya" << endl;
	}
	if(numero > dato){
		cout << "Mayor a 5" << endl;
	}else{
		cout << "bn" << endl;
	}
	return 0;
}
