/*
 * 2. Escriba un prograqma que lea tres numeros y determine cual de ellos es el mayor
 *
 * */
#include<iostream>
using namespace std;
int main(){
	int a, b, c; 
	cout << "ingrese 3 numeros: " <<endl; cin >> a >> b >> c;
	if(a >= b && a >= c){
		cout << "el numero mayoe es " << a << endl;
	}else if(b >= a && b >= c){
		cout << "El numero mayor es: " << b << endl;
	}else{
		cout << "El numero mayor es " << c << endl;
	}
	return 0;
}

