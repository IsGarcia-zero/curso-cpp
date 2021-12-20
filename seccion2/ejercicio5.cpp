/*
 * 5. Escriba un fragmento de programa que intercambie los valores de 2 variables
 *
 *
 * */
#include<iostream>
using namespace std;
int main(){
	int a = 0, b = 0, aux = 0;
      	cout << "Ingrese a: " << endl; cin >> a;
	cout << "Ingrese b: " << endl; cin >> b;
	a = aux; 
	a = b; 
	b = aux;
	cout << "a ahora es " << a << " b ahora es: " << b << endl;
	return 0;
}
