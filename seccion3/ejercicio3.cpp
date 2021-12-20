/*
 * 3. Realice un programa que lea un valor entero y determine si se trata de par o impar
 *
 * */
#include<iostream>
using namespace std;
int main(){
	unsigned int a; 
	cout << "Ingrese el numero " << endl; cin >> a;
	if((a%2) == 0){
		cout << "Es par" << endl; 
	}else{
		cout << "Es impar" << endl;
	}
	return 0;
}
