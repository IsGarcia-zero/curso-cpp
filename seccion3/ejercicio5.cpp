
/*
    5. Escriba un programa que lea de la entrada estandar 
    un caracter e indique en la salida estandar si el caracter es una vocal minuscula
    o no

*/
#include<iostream>
using namespace std;
int main(){
    char a;
    cout << "Ingrese la letra: " << endl; cin >> a;
    switch (a)
    {
    case 'a': 
    case 'e': 
    case 'i':
    case 'o':
    case 'u':
        cout << "Es vocal con minuscula"<<endl;
        break;
    default:
        cout << "NO es una vocal con miniscula"<<endl;
        break;
    } 
    return 0;
}