#include <iostream> //Esta es libreria usada para entrada y salida de datos
#include <math.h>	//Esta libreria permite realizar operaciones matematicas
#include <iomanip>	//Esta libreria ayuda a dar más exactitud al dato
#include <stdio.h> 	//Esta libreria es para poder cambiar color 
#include <windows.h> //Esta libreria es para poder darle sonido a la salida de datos
//Esta programacion fue hecha por Edwin ELias Valladares Portillo
//El proposito de la programacion es saber cual es el salario de cada empleado
using namespace std;
int main() {
	system("color 48");
	Beep(900,700);
	//Esta es la variable que utilice para el dato de ventas
	int a;
	//Esta es la variable que utiluce para el dato cuando es más de 4000000
	float b;
	do{
	
	cout << "Bienvenido, esta es una plantilla para saber cual es su salario correspondiente"<<endl;
	cout << "Por favor ingrese su venta realizada al mes: "<<endl;
	cin>>a;
}while ( a < 0 );
	//Este primer If es para cuando las ventas van desde 0 ventas hasta 500000	
	if (a >= 0 && a <= 500000 ){
		cout << "Su salario es de $80.000"<<endl;
	}
	//Este Else If es para cuando las ventas van desde 500001 hasta 1000000
	else if (a > 500001 && a <= 1000000){
		cout << "Su salario es de $160.000"<<endl;
	}
	//Este Else If es para cuando las ventas van desde 1000001 hasta 1500000
	else if (a > 1000001 && a <= 1500000){
		cout << "Su salario es de $320.000"<<endl;
	}
	//Este Else If es para cuando las ventas van desde  1500001 hasta 2500000
	else if ( a > 1500001 && a <= 2500000 ){
		cout << "Su salario es de $450.000"<<endl;
	}
	//Este Else If es para cuando las ventas van desde 2500001 hasta 4000000
	else if ( a > 2500001 && a <= 4000000 ){
		cout << "Su salario es de $550.000"<<endl;
	}
	//Este Else If es para cuando las ventas van desde mas 4000000
	else{
	( a > 4000000.00);
	//Aca use la variable flotante "B" para encontrar el salario multiplicando las ventas por el 20%
		(b = a * 0.20); 	
		cout<<fixed<<setprecision(2)<< "Su salario es de $ "<<b<<endl;
	}

	return 0; 
}
