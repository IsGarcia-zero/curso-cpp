/*
    7. Esctiba un programa que solicite un entero e indique}
    em la salida estandar si la edad introducida esta en el rango
    de [18-25]
*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Ingrese su edad: "<< endl; cin >> a;
    if (a >= 18 && a <= 25 ){
        cout << "la edad introducida esta en el rango [18-25]"<<endl;
    }else{
        cout << "No esta en el rango"<<endl;
    }
    return 0;
}

