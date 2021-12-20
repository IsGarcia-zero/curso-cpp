/*
 * 1. Escribe la siguiente expresion en c++
 */
#include<iostream>
using namespace std;
int main(){
	float a, b, r = 0;
	cout << "Digite el valor de a: "<< endl; cin >> a;
	cout << "Digite el valor de b: "<< endl; cin >> b;
	r = (a / b) + 1;
	cout.precision(2);//Me sirve para poder poner solo con 2 decimales mi resultado
	cout << "El resultado es de: " << r << endl;
	return 0;
}
