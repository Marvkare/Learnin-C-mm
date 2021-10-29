#include <iostream>

using namespace std; 

int main (){

    float sueldo;
    cout<<"Dame el sueldo del operario";
    cin>>sueldo;
    //condicional if siempre retornara un valor booleano
    if(sueldo >= 30000){
        cout<<"Este operario debe de pagar inpuestos";
    }
    return sueldo;
}

