/* 
 * 1. Escribe un programa que lea de la entrada estandar dos números y muestre en la salida éstandar su suma, resta, multiplicacion, y division
 *
 */
#include<iostream>
using namespace std;
int main(){
	int a, b;
	int suma = 0, resta = 0, multiplicacion = 0;
	float division = 0;
	cout << "Elige el numero 1 (a): " << endl;
	cin >> a;
	cout << "Elige el numero 2 (b): " << endl;
	cin >> b;
	suma = a + b;
	resta = a - b;
	multiplicacion = a * b;
	division = a/b;
	cout << endl;
	cout << "La suma es: " << suma << endl << "La resta es: " << resta << endl;
	cout << "La multiplicacion es: " << multiplicacion << endl << "La division es: " << division << endl;
	return 0;
}
