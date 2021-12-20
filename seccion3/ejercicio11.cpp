/*
    11. Simular cajero
*/
#include<iostream>
using namespace std;
int main(){
    int opc, saldo = 1000;
    cout << "-----------------Menu----------------"<<endl;
    cout << "1. Depositar dinero" <<endl;
    cout << "2. Retirar dinero" << endl;
    cout << "n. Salir" <<endl;
    cin >> opc;
    switch (opc)
    {
    case 1:
        int dineroD;
        cout << "Ingrese el dinero a depositar" <<endl;
        cin >> dineroD;
        saldo += dineroD; // Es el nuevo dinero
        break;
    case 2: 
        int dineroR;
        cout << "INgrese el dinero a retirar" << endl;
        cin >> dineroR;
        if (dineroR > saldo){
            cout << "No hay dinero el cual retirar"<<endl;
            exit(1);
        }else{
            saldo -= dineroR;
        }
        break;
    default:
        cout << "Adios" <<endl;
        exit(1);
        break;
    }
    cout << "El nuevo dinero es: "<< saldo << endl;
    return 0;
}