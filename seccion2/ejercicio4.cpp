/*
 * 4. Ejercicio numero 4 de la seccion 2
 *
 * */
#include<iostream>
using namespace std;
int main(){
	float a, b, c, d, r;
	cout << "Elegir (a): " << endl; cin >> a;
	cout << "Elegir (b): " << endl; cin >> b;
	cout << "Elegir (c): " << endl; cin >> c;
	cout << "Elegir (d): " << endl; cin >> d;
	r = a + (b / (c - d));
	cout.precision(2);
	cout << "El resultado es: " << r << endl;
	return 0;
}
