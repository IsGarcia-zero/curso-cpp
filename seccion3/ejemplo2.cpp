#include<iostream>
using namespace std;
int main(){
	unsigned int n; 
	cout << "Digite numero entero entre 1 - 5: " << endl; cin >> n; 
	switch(n){
		case 1: cout << "Es el numero 1"<< endl; break;
		case 2: cout << "Es el numero 2"<< endl; break;
		case 3: cout << "Es el numero 3"<< endl; break;
		case 4: cout << "Es el numero 4"<< endl; break;
		case 5: cout << "Es el numero 5"<< endl; break;
		default: cout << "Es mayor a 5 o 0"<< endl; break; 
	}
	return 0;
}
