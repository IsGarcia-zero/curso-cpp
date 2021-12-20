/*
 * 2. Escribe la siguiente expresion matematica como expresion en c++
 */
#include<iostream>
using namespace std;
int main(){
	float a, b, c, d, r;
	cout << "Ingrese a: "<< endl; cin >> a;
	cout << "Ingrese b: "<< endl; cin >> b;
	cout << "Ingrese c: "<< endl; cin >> c;
	cout << "Ingrese d: "<< endl; cin >> d;
	r = (a + b)/(c + d);
	cout.precision(2);
	cout << "El resultado es: " << r << endl;
	return 0;
}
