/*
 * 7. La calificación final de un estudiante es el promedio de las 3 notas
 * 	+La nota de prácticas que cuentan un 30% del total 
 * 	+La nota teórica que cuenta un 60%
 * 	+La nota de participación que cuenta el 10% restante
 *    Escriba un programa que lea las tres notas del alumno y escriba su nota final
 *
 * */
#include<iostream>
using namespace std;
int main(){
	const float pP = 0.3, pT = 0.6, pPa = .1;
	float cP, cT, cPa, cF;
	cout << "Ingrese su calificación práctica: " << endl; cin >> cP;
	cout << "Ingrese su calificación Teorica: " << endl; cin >> cT;
	cout << "Ingrese su calificación Participaciones: " << endl; cin >> cPa;
	cF = (cP * pP) + (cT * pT) + (cPa * pPa);
	cout.precision(2);
	cout << "La calificación final es de: " << cF << endl;
	return 0;
}
