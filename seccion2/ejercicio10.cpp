#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a, b, c, x1, x2;
	cout << "Escriba el valor de a: " << endl; cin >> a; 
	cout << "Escriba el valor de b: " << endl; cin >> b; 
	cout << "Escriba el valor de c: " << endl; cin >> c;
       	x1 = ((-b) + sqrt(pow(b, 2) - 4 * a * c))/( 2 * a );
       	x2 = ((-b) - sqrt(pow(b, 2) - 4 * a * c))/( 2 * a );
	cout << "Sus 2 soluciones son para x1 " << x1 << ", y para x2 " << x2 << endl;
	return 0;
}
