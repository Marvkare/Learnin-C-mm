#include <iostream>

using namespace std; 

int main (){

    float sueldo;
    cout<<"Dame el sueldo del operario";
    cin>>sueldo;
    //condicional
    if(sueldo >= 30000){
        cout<<"Este operario debe de pagar inpuestos";
     //en caso de no cumplir la funcion    
    }else{
        cout<<"Este operador no tiene que pasgar impuestos ";
    }
    return sueldo;
}


