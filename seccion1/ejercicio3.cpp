/*
 * 3. Realice un programa que lea la entrada estandar los siguientes datos de una persona: 
 * 		Edad : dato de tipo entero-
 *		Sexo : dato de tipo caracter.
 *		Altura en metros dato de tipo real.
 *	Tras leer los datos, el programa debe mostrarlos en la salida estandar.
 */
#include<iostream>
using namespace std;
int main(){
	int edad;
	char sexo[10];
	float altura;
	cout << "Seleccione su edad, su sexo (M o F), y su altura en ese orden"<<endl;
	cin >> edad;
	cin >> sexo;
	cin >> altura;
	cout << "Los datos son: " << endl << edad << endl << sexo << endl << altura << endl;
	return 0;
}
