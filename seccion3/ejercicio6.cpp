/*
    Escriba un programa que lea de la
     entrada estandar e indique si el 
     caracter es una vocal minuscula, 
     mayuscula o9 no es vocal
*/
#include<iostream>
using namespace std;
int main(){
    char a; 
    cout << "Seleccione su letra" << endl; cin >> a;
    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Es vocal minuscula"<<endl;
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Es vocal mayuscula" << endl;
        break;
    default:
        cout << "No es ninguna de las 2"<< endl;
        break;
    }
    return 0;
}