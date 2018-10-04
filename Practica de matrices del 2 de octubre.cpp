#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int fil, col;
	int matriz[30][30];
	cout <<"Ingrese el numero de filas: "; cin>>fil;
	cout <<"Ingrese el numero de columnas: ";cin>>col;
	
	for (int i=0; i<fil; i++){
		
		for (int j=0; j<col; j++){
			
			cout << "Ingrese dato ["<<i<<"]["<<j<<"]: ";cin>>matriz[i][j];
		}
	}
	return 0;
	getch();
}
