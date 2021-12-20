/*
 * 4. Comprobar si un numero digitativo por el usuario es positivo o negativo
 *
 *
 * */
#include<iostream>
using namespace std;
int main(){
	int a;
	cout << "Ingrese un numero: " << endl; cin >> a; 
	if (a == 0){
		cout << "El numero es 0" << endl; 
	}else if(a < 0){
		cout << "El numero es negativo" << endl;
	}else{
		cout << "El numero es positivo" << endl;
	}
	return 0;
}
