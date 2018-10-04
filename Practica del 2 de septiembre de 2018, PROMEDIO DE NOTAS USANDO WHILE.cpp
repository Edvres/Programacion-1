#include <iostream>
#include <cstdlib>
#include <windows.h>

//Este codigo fue diseñado por Edwin Elias Valladares Portillo
//El proposito es mostrar el promedio por medio de "For" 

using namespace std;

int main() {
	float notas [5];
	float sumatoria=0;
	float promedio;
	 
	for (int e=0; e<=4; e++ )
	{	
	do{
		cout << "Ingrese la nota "<<e+1<<endl;
		cin>>notas[e];
	}while(notas[e]<0  || notas[e]>10);
		sumatoria=sumatoria+notas[e];
	}
	cout << "Las notas son: "<<endl;
	for (int e=0; e<=4; e++)
	{
		cout << "N" <<e+1<<":"<<notas[e]<<endl;
	}
	promedio=sumatoria/5;
	cout <<"El promedio es de: "<<promedio<<endl;
	return 0;
}
