#include<iostream>
#include<math.h>
#include<cstdlib>
#include<windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int num;
	int fact = 1;
	cout << "Ingrese el numero factorial: " <<endl;
	cin>>num;
	for (int b = 1; b <= num; b++)
	{
		fact=fact*b;
		
	}
		cout << "El resultado es: "<<fact<<endl;
	
	
	return 0;
}
