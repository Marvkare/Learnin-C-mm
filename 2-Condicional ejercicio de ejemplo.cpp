
//libreria para poder obtener datos de consola 
#include <iostream>
/*El motivo de la tercera línea, using namespace std, es el de dar acceso 
al espacio de nombres (namespace) std, donde se encuentra encerrada toda la 
librería estándar. El motivo de encerrar la librería estándar en un espacio 
de nombres no es otro que el de hacer más sencilla la creación de proyectos 
muy grandes, de manera que el proyecto no deje de compilar debido a que se han 
escogido los mismos nombres para dos funciones, clases, constantes o variables. */
using namespace std;

/*Declaramos la funcion con el nombre main "esta puede tener cualquier nombre "*/
int main ()
{
	int x = 1; 
	float estatura;
	cout<<"Dame tu estatura";
	cin>>estatura;
	if (estatura > 1){
		cout<<estatura ;
	}
	else{
		cout<<"no cumple con los requisitos de estatura";
	}

}
