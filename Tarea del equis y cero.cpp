#include <iostream>
#include <conio.h>
#include <stdlib.h>
//Este codigo fue diseñado por Edwin Elias Valladares Portillo
//Es un jugo de X/0
char cuadrito [10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};//Declaracion de variables
int check();//Variable de tipo entero
void tabla();//No retorna valor
using namespace std;
int main() {
	system ("color f0");
	int jugador = 1,i,opcion;//La variable de tipo entera para el jugador 1
	char mark;//Esta es la opcion del marcado en el juego
	void clrscr(); //Esta función despeja la ventana de texto actual y coloca el cursor en la esquina superior izquierda
	do{
		tabla();//la variable que no retorna valor
		jugador = (jugador%2)?1:2; //Esta es la opcion para el cambio de jugador 1 a 2
		cout<<"Jugador"<<jugador<<", Ingrese un numero: ";
		cin>>opcion; //Guarde el dato en la variable de tipo entero de opcion
		mark = (jugador == 1)? 'X' : 'O'; //la opcion del jugador 1 para poner 0 y marcarlo
		if (opcion == 1 && cuadrito [1] == '1')//La opcion poder poner en el cuadro ya sea la X o el 0
		cuadrito [1] = mark;//Y acá dar la orden de marcarlo
		else if (opcion == 2 && cuadrito [2] == '2')//La opcion poder poner en el cuadro ya sea la X o el 0
		cuadrito [2] = mark;//Y acá dar la orden de marcarlo
		else if (opcion ==3 && cuadrito [3] == '3')//La opcion poder poner en el cuadro ya sea la X o el 0
		cuadrito [3] = mark;//Y acá dar la orden de marcarlo
		else if (opcion == 4 && cuadrito [4] == '4')//La opcion poder poner en el cuadro ya sea la X o el 0
		cuadrito [4] = mark;//Y acá dar la orden de marcarlo
		else if (opcion == 5 && cuadrito [5] == '5')//La opcion poder poner en el cuadro ya sea la X o el 0
		cuadrito [5] = mark;//Y acá dar la orden de marcarlo
		else if (opcion == 6 && cuadrito [6] == '6')//La opcion poder poner en el cuadro ya sea la X o el 0
		cuadrito [6] = mark;//Y acá dar la orden de marcarlo
		else if (opcion == 7 && cuadrito [7] == '7')//La opcion poder poner en el cuadro ya sea la X o el 0
		cuadrito [7] = mark;//Y acá dar la orden de marcarlo
		else if (opcion == 8 && cuadrito [8] == '8')//La opcion poder poner en el cuadro ya sea la X o el 0
		cuadrito [8] = mark;//Y acá dar la orden de marcarlo
		else if (opcion == 9 && cuadrito [9] == '9')//La opcion poder poner en el cuadro ya sea la X o el 0
		cuadrito [9] = mark;//Y acá dar la orden de marcarlo
		else {
			cout << "Movimiento erroneo por favor eliga otra posicion"; 
			jugador--; //Esta es la opcion para que el jugador pueda ingresar un numero diferente
			getch();
		}
		i=check();
		jugador++;
		system ("cls"); 
	}while(i==-1);//Esto lo usare luego para perder
	tabla();
	if (i==1)//El if se usa para cuando se da el resultado por si el jugador gano y decir quien es
		cout << "==>\aJugador "<<--jugador<<" Gano";
	else//El else es para cuando se da un empate y no existe ganador
	cout << "==> Empate";
	getch();
	return 0;
}
int check()
{
	if (cuadrito[1] == cuadrito[2] && cuadrito[2] == cuadrito [3])//Esta es la declarcion de como se puede ganar uniendo esos espacios
		return 1;//Este return 1 significa ganar
	else if (cuadrito[2] == cuadrito[5] && cuadrito[5] == cuadrito [8])//Esta es la declarcion de como se puede ganar uniendo esos espacios
	return 1;//Este return 1 significa ganar
	else if (cuadrito[3] == cuadrito[6] && cuadrito[6] == cuadrito [9])//Esta es la declarcion de como se puede ganar uniendo esos espacios
	return 1;//Este return 1 significa ganar
	else if (cuadrito[1] == cuadrito[4] && cuadrito[4] == cuadrito [7])//Esta es la declarcion de como se puede ganar uniendo esos espacios
	return 1;//Este return 1 significa ganar
	else if (cuadrito[4] == cuadrito[5] && cuadrito[5] == cuadrito [6])//Esta es la declarcion de como se puede ganar uniendo esos espacios
	return 1;//Este return 1 significa ganar
	else if (cuadrito[7] == cuadrito[8] && cuadrito[8] == cuadrito [9])//Esta es la declarcion de como se puede ganar uniendo esos espacios
	return 1;//Este return 1 significa ganar
	else if (cuadrito[1] == cuadrito[5] && cuadrito[5] == cuadrito [9])//Esta es la declarcion de como se puede ganar uniendo esos espacios
	return 1;//Este return 1 significa ganar
	else if (cuadrito[3] == cuadrito[5] && cuadrito[5] == cuadrito [7])//Esta es la declarcion de como se puede ganar uniendo esos espacios
	return 1;//Este return 1 significa ganar
	else if (cuadrito [1] != '1' && cuadrito [2] != '2' && cuadrito [3] != '3'&& //Esta es un tipo de validacion que ayuda a que numeros fuera de 1 a 9 den error
			 cuadrito [4] != '4' && cuadrito [5] != '5' && cuadrito [6] != '6'&& //Esta es un tipo de validacion que ayuda a que numeros fuera de 1 a 9 den error
			 cuadrito [7] != '7' && cuadrito [8] != '8' && cuadrito [9] != '9')  //Esta es un tipo de validacion que ayuda a que numeros fuera de 1 a 9 den error
	return 0;
	else //Este else significa que perdiste
		return -1;
}
void tabla()
{
	void clrsrc();//Esta función despeja la ventana de texto actual y coloca el cursor en la esquina superior izquierda
	cout << "Jugador 1  (X) - Jugador 2 (0)"<<endl<<endl;
	cout << endl;//Esto lo tuve que hacer para poder hacer el salto de linea correctamente
	cout << "     |     |     "<<endl; //El dibujo del cuadro
	cout << "  " << cuadrito [1]<<"  |  " << cuadrito [2] << "  |  " << cuadrito[3] <<endl;//la asignacion de posiciones
	cout << "_____|_____|_____"<<endl;
	cout << "     |     |     "<<endl;
	cout << "  " << cuadrito [4]<<"  |  " << cuadrito [5] << "  |  " << cuadrito[6] <<endl;//la asignacion de posiciones
	cout << "_____|_____|_____"<<endl;
	cout << "     |     |     "<<endl;
	cout << "  " << cuadrito [7]<<"  |  " << cuadrito [8] << "  |  " << cuadrito[9] <<endl;//la asignacion de posiciones
	cout << "     |     |     "<<endl;
}
