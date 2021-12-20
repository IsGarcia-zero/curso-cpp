/*
 * 8. Escriba un programa que lea de la entrada estándar los 2 catetos de un triangulo rectangulo y escriba en la salida estandar su hipotenusa
 * 
 *
 *
 * */
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float ca, co, h; 
	cout << "Ingrese el cateto adyacente" << endl; cin >> ca;
	cout << "Ingrese el cateto opuesto" << endl; cin >> co;
	h = sqrt(pow(ca, 2) + pow(co, 2));
	cout.precision(2);
	cout << "La hipotenusa es: " << h << endl;
	return 0;
}
