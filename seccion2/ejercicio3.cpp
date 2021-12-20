/*
 * 3. Escribe la siguiente expresion en c++
 *
 */
#include<iostream>
using namespace std;
int main(){
	float a, b, c, d, e, f, r;
	cout << "Eliga (a): " << endl; cin >> a;
	cout << "Eliga (b): " << endl; cin >> b;
	cout << "Eliga (c): " << endl; cin >> c;
	cout << "Eliga (d): " << endl; cin >> d;
	cout << "Eliga (e): " << endl; cin >> e;
	cout << "Eliga (f): " << endl; cin >> f;
	r = (a + ( b / c ))/(d + ( e / f ));
	cout.precision(2);
	cout << "El resultado es: " << r << endl;
	return 0;
}
