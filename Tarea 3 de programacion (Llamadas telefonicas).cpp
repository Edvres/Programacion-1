#include <iostream>//Libreria para entrada y salida de datos
#include <windows.h>//Libreria que contiene las declaraciones de todas las funciones de la biblioteca Windows API,
#include <cstdlib>//Libreria con gestión de memoria dinámica, control de procesos y otras
#include <math.h>//Libreria para problemas matematicos
using namespace std;
//Esta es un programacion realizada por Edwin Elias Valladares Portillo 
//Entre el rango de 0 a 10 minutos cada minuto vale $0.05
//En el rango de 11 a 15 minutos cada minuto vale $0.08
//En el rango de más de 15 minutos cada minuto vale $0.10
//El proposito es saber cuanto debe pagar cada cliente 
void j(){//Declaracion de una funcion, no retorna ni recibe nada.
	system ("cls");//La declaracion anterior es para esta funcion de limpiado de pantalla
}
void h(){//Declaracion de una funcion, no retorna ni recibe nada.
	system ("pause");//La declaracion anterior es para esta funcion de mantener la pantalla pausada
}
void g (){//Declaracion de una funcion, no retorna ni recibe nada.
	cout << "................................................................................................................................................................................................................................................................................................................................................"<<endl;
}
int main(int argc, char** argv) {
	int minutos;//Los minutos son enteros en esta 
	float total1;//El resultado es flotante debido a que es cantidad monetaria
	float total2;//El resultado es flotante debido a que es cantidad monetaria
	float total3;//El resultado es flotante debido a que es cantidad monetaria
	g();//Declaracion que tiene proposito el adorno
	cout <<"Bienvenido, este es un programa para saber cual es el total a pagar por la cantidad de minutos que ha realizado una llamada"<<endl;
	g();//Declaracion que tiene proposito el adorno
	h();//Declaracion que tiene como proposito mantener la pantalla pausada
	j();//Declaracion que tiene como proposito limpiar la pantalla
	do{
	g();//Declaracion que tiene proposito el adorno
	cout <<"Por favor ingrese la cantidad total de minutos que realizo en la llamada telefonica"<<endl;
	g();//Declaracion que tiene proposito el adorno
	cin>>minutos;
	h();//Declaracion que tiene como proposito mantener la pantalla pausada
	j();//Declaracion que tiene como proposito limpiar la pantalla
	}while(minutos < 0);
	if (minutos > 0 && minutos < 10){//Condicion que el numero debe ser mayor de o y menor de 10 para entrar
		total1=(minutos*0.05);//Operacion matematica que permite que los primeros 10 minutos valgan $0.05
		g();//Declaracion que tiene proposito el adorno
		cout<< "Su total a pagar es de: "<<total1<<endl;
		g();//Declaracion que tiene proposito el adorno
		h();//Declaracion que tiene como proposito mantener la pantalla pausada
		j();//Declaracion que tiene como proposito limpiar la pantalla
	}
	else if (minutos > 10 && minutos <= 15){//Condicion que el numero debe ser mayor de 10 y menor o igual que 15 para entrar
		total2=(0.50)+(minutos*0.028888);//Operacion matematica que permite que los primeros 10 minutos valgan $0.05, luego se le suma el 
		//valor de los minutos cuando pasan los 10 minutos que cada minuto empieza a valer 0.08
		g();//Declaracion que tiene proposito el adorno
		cout<< "Su total a pagar es de: "<<total2<<endl;
		g();//Declaracion que tiene proposito el adorno
		h();//Declaracion que tiene como proposito mantener la pantalla pausada
		j();//Declaracion que tiene como proposito limpiar la pantalla
	}
	else{
		(minutos > 15 );//Condicion que el numero debe ser mayor de 15 para entrar
		total3=(0.50)+(0.40)+(minutos*0.013);//Operacion matematica que permite que los primeros 10 minutos valgan $0.05, luego se le suma el 
		//valor de los minutos cuando pasan los 10 minutos que cada minuto empieza a valer 0.08 y suma los valores de los minutos cuando
		//pasa de 15 minutos que empieza a valer 0.10 cada minuto
		g();//Declaracion que tiene proposito el adorno
		cout<< "Su total a pagar es de: "<<total3<<endl;
		g();//Declaracion que tiene proposito el adorno
		h();//Declaracion que tiene como proposito mantener la pantalla pausada
		j();//Declaracion que tiene como proposito limpiar la pantalla
		g();//La funcion para usar "*" como adorno
		cout <<"Hecho por Edwin Valladares, Tarea del costo de cada minuto en una llamada"<<endl;
		g();//La funcion para usar "*" como adorno
		h();//La funcion de system("pause")
	}
		
	return 0;
	
}
