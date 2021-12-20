/*
    8. Escribe un programa que lea de la entrada estandar 3 numeros
    DEspues debe de leer un cuarto numero e indicar
    si el numero coincide con el cuarto 
*/
#include<iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cout << "Escriba el numero 1: " <<endl;cin >> a;
    cout << "Escriba el numero 2: " <<endl;cin >> b;
    cout << "Escriba el numero 3: " <<endl;cin >> c;
    cout << "Escriba el numero 4: " <<endl;cin >> d;
    if (a == d){
        cout << "Es igual con el primero"<<endl;
    }
    else if (b == d){
        cout << "Es igual con el segundo"<<endl;
    }else if (c == d){
        cout << "Es igual con el tercero"<<endl;
    }
    else{
        cout << "no Es igual con ninguno"<<endl;
    }
    return 0;
}