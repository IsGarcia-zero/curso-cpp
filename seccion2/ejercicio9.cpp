#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float x, y, f;
	cout << "Ingrese los valores de f(x, y) en ese orden" << endl;
	cin >> x;
	cin >> y;
	f = (sqrt(x))/(pow(y, 2) - 1);
	cout.precision(2);
	cout << "El resultado es: " << f << endl;
	return 0;
}
