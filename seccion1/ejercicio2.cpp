/*
 * 2. Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la salida estandar el precio del producto al IVA
 */
#include<iostream>
using namespace std;
int main (){
	const float iva = 1.16;
	float precio = 0;
	cout << "Ingrese cuanto cuesta el producto " << endl;
	cin >> precio;
	precio *= iva;
	cout << "El precio del iva es: " << precio << endl;
	return 0;
}
