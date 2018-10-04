#include <iostream>
#include <conio.h>
#include <math.h>
//Esta programacion fue hecha por Edwin Elias Valladares Portillo, y el proposito es saber cual seria el descuento al comprar sacos y el IVA que se aplica a este
//luego del descuento.
using namespace std;
int main(int argc, char** argv) {
	//Acá use enteros por ser la cantidad de sacos
	int a;
	//Acá use flotantes por ser cantidad monetaria
	float b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t;

	cout<< "Bienvenido, este es un sistema para saber cual es el costo de los sacos si a este se le aplica el descuento y tambien saber cual es el IVA que este posee" << endl;
	cout<< "Cada saco que estamos ofreciendo tiene el precio de $100"<<endl;
	cout<< "Si usted compra mas de 100 sacos se le aplica el 10% de descuento mas IVA"<<endl;
	cout<< "Si usted compra mas de 200 sacos se le aplica el 15% de descuento mas IVA"<<endl;
	cout<< "Si usted compra mas de 250 sacos y menos de 300 se le aplica el 20% de descuento mas IVA"<<endl;
	cout<< "Si usted compra mas de 300 sacos se le aplica el 25% de descuento mas IVA"<<endl;
	cout<< "Por favor ingrese la cantidad de sacos que desea comprar: ";
	cin>>a;
	//Este primer If es para cuando la compra es mayor a 100 y menor a 200
	if (a>100&&a<200){
		//Este paso es para multiplicar los sacos por $100.00 que es el precio de cada saco para saber el precio sin descuento ni IVA
		d = (a * 100.00);
		//Este paso es para hacer el descuento multiplicando el precio total por el 10%
		b = (d * 0.10);
		//Este paso es para saber cual es el precio aplicando el descuento, restando el precio de los sacos con el descuento aplicado
		c = (d - b);
		cout << "El costo de los sacos con el descuento es de:$ "<<c<<endl;
		//Este paso es para aplicar el IVA al precio, multiplicando el costo,con el descuento incluido, por el 13%
		e = (c * 0.13 + c );
		cout << "El costo total aplicando el IVA es de:$ "<<e<<endl;
	}
	//Este segundo If es para cuando la compra es mayor a 200 y menor a 250
	if (a > 200 && a < 250){
		//Este paso es para multiplicar los sacos por $100.00 que es el precio de cada saco para saber el precio sin descuento ni IVA
		h = (a * 100.00);
		//Este paso es para hacer el descuento multiplicando el precio total por el 15%
		f = (h * 0.15);
		//Este paso es para saber cual es el precio aplicando el descuento, restando el precio de los sacos con el descuento aplicado
		g = (h - f);
		cout << "El costo de los sacos con el descuento es de:$ "<<g<<endl;
		//Este paso es para aplicar el IVA al precio, multiplicando el costo,con el descuento incluido, por el 13%
		i = (g * 0.13 + g);
		cout << "El costo total aplicando el IVA es de:$ "<<i<<endl;
	}
	//Este tercer If es para cuando la compra es mayor a 2500 y menor a 300
	if (a > 250 && a < 300){
		//Este paso es para multiplicar los sacos por $100.00 que es el precio de cada saco para saber el precio sin descuento ni IVA
		j = (a * 100.00);
		//Este paso es para hacer el descuento multiplicando el precio total por el 20%
		k = (j * 0.20);	
		//Este paso es para saber cual es el precio aplicando el descuento, restando el precio de los sacos con el descuento aplicado
		l = (j - k);
		cout << "El costo de los sacos con el descuento es de:$ "<<l<<endl;
		//Este paso es para aplicar el IVA al precio, multiplicando el costo,con el descuento incluido, por el 13%
		m = ( l * 0.13 + l);
		cout << "El costo total aplicando el IVA es de:$ "<<m<<endl;
	}
	//Este cuarto If es para cuando la compra es mayor a 300
	if (a > 300){
		//Este paso es para multiplicar los sacos por $100.00 que es el precio de cada saco para saber el precio sin descuento ni IVA
		n = (a * 100.00);
		//Este paso es para hacer el descuento multiplicando el precio total por el 25%
		o = (n * 0.25);
		//Este paso es para saber cual es el precio aplicando el descuento, restando el precio de los sacos con el descuento aplicado
		p = (n - o);
		cout << "El costo de los sacos con el descuento es de:$ "<<p<<endl;
		//Este paso es para aplicar el IVA al precio, multiplicando el costo,con el descuento incluido, por el 13%
		q = (p * 0.13 + p);
		cout << "El costo total aplicando el IVA es de:$ "<<q<<endl;
	}
	//Este quinto If es para cuando la compra es menor a 100
	if (a < 100&& a >= 1 ){
		//Este paso es para multiplicar los sacos por $100.00 que es el precio de cada saco para saber el precio sin descuento ni IVA
		r = (a * 100.00);
		cout << "El costo de los sacos es de:$ "<<r<<endl;
		//Este paso es para aplicar el IVA al precio, multiplicando el costo por el 13%
		s = ( r * 0.13 + r);
		cout << "El costo total aplicando el IVA es de:$ "<<s<<endl;
	}
	//Este sexto If es para cuando se ingresa un numero negativo o cero
	if (a <= 0){
		cout <<" Ingrese un numero mayor a 0"<<endl;
	}
		

		
	return 0;
}
