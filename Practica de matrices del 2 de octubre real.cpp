#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main() {
	system("color f0");
	int fil, col;
	int matriz[30][30];
	cout <<"Ingrese el numero de filas: "; cin>>fil;
	cout <<"Ingrese el numero de columnas: ";cin>>col;
	
	int matrizB[fil][col];
	
	for (int i=0; i<fil; i++){
		
		for (int j=0; j<col; j++){
			
			cout << "Ingrese dato ["<<i<<"]["<<j<<"]: ";cin>>matriz[i][j];
		}
	}
	for (int i=0; i<fil; i++){
		for (int j=0; j<col; j++){
			cout <<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	//MATRIZB
	for (int i=0; i<fil; i++){
		for (int j=0; j<col; j++){
			matrizB[i][j] = matriz [i][j];
		}
	}
	cout << "\nMatriz B\n";
		for (int i=0; i<fil; i++){
			for (int j=0; j<col; j++){
				cout << matrizB[i][j]<<" ";
			}
			cout<<"\n";
		}
		
	return 0;
	getch();
}






