#include <iostream>
#include <stdlib.h>  

using namespace std;


int main (){
    system("color 43");
	
    float calif1, calif2, calif3, calif4, promedio;
    
    cout<<"ingrese Calificacion 1";
    cin>>calif1;
    cout<<"ingrese Calificacion 2";
    cin>>calif2;
    cout<<"ingrese Calificacion 3";
    cin>>calif3;
    cout<<"ingrese Calificacion 4";
    cin>>calif4;
    promedio = (calif1+calif2+calif3+calif4)/4;
    cout<<promedio;
    if(promedio >=7 ){
        cout<<"El alumno es regular ";

    }if(promedio >=4){
        cout<<"Este alumno es regular";
    }else{
        cout<<"Este alumno esta reprobado";
    }
}
