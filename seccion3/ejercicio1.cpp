/*
 * 1. Escriba un programa que lea dos numeros y determine cual es el mayor de ellos
 *
 * */
#include<iostream>
using namespace std; 
int main(){
	int a, b; 
	cout << "Ingrese el primer numero: " << endl; cin >> a; 
	cout << "Ingrese el segundo numero: " << endl; cin >> b; 
	if(a == b){
		cout << "son iguales" << a << b << endl;
	}else{
		if(a > b){
			cout << "El mayor es: " << a << endl;
		}else{
			cout << "El mayor es: " << b << endl;
		}
	}
	return 0;
}

