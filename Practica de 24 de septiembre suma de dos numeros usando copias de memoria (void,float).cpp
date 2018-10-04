#include <cstdlib>
#include <iostream>

using namespace std;
float sumar (float x, float y);
void pedirNumero();
float sumar (float x, float y)
{
	return (x+y);
}
void pedirNumero()
{
	float x;
	float y;
	float res;
	cout<< "Ingrese el primer numero"<<endl;
	cin>>x;
	cout<< "Ingrese el segundo numero"<<endl;
	cin>>y;
	res=sumar(x,y);
	cout << "El resultado es: "<<res<<endl;
}
	int main(){
	pedirNumero();
	system("pause");
	return 0;
}
