#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;
void l(){
	system("cls");
}//declaracion de la funcion, no retorna ni reciba nada, la use para no estar escribiendo siempre el system("cls")
//que se usa para limpiar la pantalla
int main(int argc, char** argv) {
	int a=1;//contador
	int vn;//su valor cambiara de 2 a 4
	int sum=0;//acumulador
	int aux;//variable de lectura o intercambio de valores
	do{
		system("cls");//Sirve para limpiar la pantalla
	cout << "Ingrese la cantidad de datos que quiere sumar [2-4]:  ";
	cin>>vn;
	}while (vn<2 || vn>4);
	
	while (a<=vn){
		l();
		cout<<"Ingrese el numero "<<a<<":"<<endl;
		cin>>aux;
		sum=sum+aux;
		a++;
	}
	l();
	cout<<"El resultado es:" <<sum<<endl;
	system("pause");
	l();
	cout <<"Diseñado por Edwin Valladares, el 20 de septiembre de 2018, 8:40 am."<<endl;
	system("pause");
	return 0;
}
