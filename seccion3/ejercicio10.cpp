/*
    10. Mostrar los meses del año, pidiendole al usuario un
    numero entre (1-12), y mostrar el mes al que corresponde
*/
#include<iostream>
using namespace std;
int main(){
    int mes;
    cout << "Ingrese el numero del mes que desea checar: "<< endl; cin >> mes;
        if (mes >=1 && mes <= 12)
        {
            switch (mes)
            {
            case 1:
                cout << "El mes es Enero."<<endl;
                break;
            case 2:
                cout << "El mes es Febrero."<<endl;
                break;
            case 3: 
                cout << "El mes es Marzo."<<endl;
                break;
            case 4: 
                cout << "El mes es Abril."<<endl;
                break;
            case 5:
                cout << "El mes es Mayo."<<endl;
                break;
            case 6: 
                cout << "El mes es de Junio" <<endl;
                break;
            case 7: 
                cout << "El mes es de Julio"<<endl;
                break;
            case 8: 
                cout << "El mes es de Agosto."<<endl;
                break;
            case 9: 
                cout << "El mes es de Septiembre."<<endl;
                break;
            case 10:
                cout << "EL mes es de Octubre"<<endl;
                break;
            case 11: 
                cout << "EL mes es de Noviembre"<< endl;
                break;
            case 12: 
                cout << "El mes es de diciembre."<<endl;
                break;
            default:
                cout<<"Error";
                break;
            }
        }else
        {
            cout << "No es un mes valido"<<endl;
        }
    
    return 0;
}