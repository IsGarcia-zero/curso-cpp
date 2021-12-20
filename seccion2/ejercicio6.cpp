/**
 *  6. Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos
 *
 *
 * */

#include<iostream>
using namespace std;
int main(){
	float n1, n2, n3, n4, nF; 
	char a1[10];
	char a2[10];
	char a3[10];
	char a4[10];
	cout << "Ingrese al primer alumno: " << endl; cin >> a1;
	cout << "Ingrese al segundo alumno: " << endl; cin >> a2;
	cout << "Ingrese al tercer alumno: " << endl; cin >> a3;
	cout << "Ingrese al cuarto alumno: " << endl; cin >> a4;
	cout << "Ingrese la calificacion de: " << a1 << endl; cin >> n1;
	cout << "Ingrese la calificacion de: " << a2 << endl; cin >> n2;
	cout << "Ingrese la calificacion de: " << a3 << endl; cin >> n3;
	cout << "Ingrese la calificacion de: " << a4 << endl; cin >> n4;
	nF = (n1 + n2 + n3 + n4)/4;
	cout.precision(2);
	cout << "La nota final es de: "<< nF<<endl;
	return 0;
}
