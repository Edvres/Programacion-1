#include <iostream>//Libreria para entrada y salida de datos
#include <windows.h>//Libreria que contiene las declaraciones de todas las funciones de la biblioteca Windows API,
#include <cstdlib>//Libreria con gestión de memoria dinámica, control de procesos y otras
#include <math.h>//Libreria para problemas matematicos

using namespace std;
//Esta programacion fue diseñada por Edwin Elias Valladares Portillo, el proposito de la prgramacion es saber cual es la produccion
//diaria de una empresa y los insumos diarios gastados
void k(){//Declaracion de una funcion, no retorna ni recibe nada.
	system ("cls");//La declaracion anterior es para esta funcion de limpiado de pantalla
}
void m(){//Declaracion de una funcion, no retorna ni recibe nada.
	system ("pause");//La declaracion anterior es para esta funcion de mantener la pantalla pausada
}
void ki(){//Declaracion de una funcion, no retorna ni recibe nada.
	cout<<"************************************************************************************************************************"<<endl;
}//La funcion para usar "*" como adorno
int main(int argc, char** argv) {
int soda; //Las variables utilizadas de tipo enteras
int jugo;//Las variables utilizadas de tipo enteras
int total1;//Las variables utilizadas de tipo enteras
int total2;//Las variables utilizadas de tipo enteras
int total3;//Las variables utilizadas de tipo enteras
int total4;//Las variables utilizadas de tipo enteras
	ki();//La funcion para usar "*" como adorno
	cout << "Bienvenido, este es un programa que le ayudara a saber cual es la cantidad de insumos usados en la produccion"<<endl;
	ki();//La funcion para usar "*" como adorno
	m();//La funcion de system("pause")
	k();//La funcion de system("cls")
do{//El bucle do para validar que los numeros que se ingresen sean mayores a 0
	ki();//La funcion para usar "*" como adorno
	cout << "Por favor ingrese la cantidad de SODAS fabricadas este dia: "<<endl;
	ki();//La funcion para usar "*" como adorno
	cin>>soda;
	k();//La funcion de system("cls")
}while(soda<0);//La validacion que el numero debe ser mayor a 0

while (soda<0);
	total1=(soda*500);//La operacion matematica para multiplicar la cantidad de jugos con la cantidad de agua requerida para una soda
	total2=(soda*800);//La operacion matematica para multiplicar la cantidad de jugos con la cantidad de azucar requerida para una soda
	ki();//La funcion para usar "*" como adorno
	cout << "La cantidad de insumos de agua para las sodas es de: "<<total1<<"ml"<<endl;
	cout << "La cantidad de insumos de azucar para las sodas es de: "<<total2<<"g"<<endl;
	ki();//La funcion para usar "*" como adorno
	m();//La funcion de system("pause")
	k();//La funcion de system("cls")
do{//El bucle do para validar que los numeros que se ingresen sean mayores a 0
	ki();//La funcion para usar "*" como adorno
	cout << "Por favor ingrese la cantidad de JUGOS fabricados este dia: "<<endl;
	ki();//La funcion para usar "*" como adorno
	cin>>jugo;
	k();//La funcion de system("cls")
}while(jugo<0);//La validacion que el numero debe ser mayor a 0

while(jugo<0);
	total3=(jugo*600);//La operacion matematica para multiplicar la cantidad de jugos con la cantidad de agua requerida para un jugo
	total4=(jugo*700);//La operacion matematica para multiplicar la cantidad de jugos con la cantidad de azucar requerida para un jugo
	ki(); //La funcion para usar "*" como adorno
	cout << "La cantidad de insumos de agua para los jugos es de: "<<total3<<"ml"<<endl;
	cout << "La cantidad de insumos de azucar para los jugos es de: "<<total4<<"g"<<endl;
	ki();//La funcion para usar "*" como adorno
	m();//La funcion de system("pause")
	k();//La funcion de system("cls")
	ki();//La funcion para usar "*" como adorno
	cout <<"Hecho por Edwin Valladares, Tarea de los insumos necesitados en una produccion"<<endl;
	ki();//La funcion para usar "*" como adorno
	m();//La funcion de system("pause")
return 0;
}
