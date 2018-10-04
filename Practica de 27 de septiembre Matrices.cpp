#include <iostream> 
#include <cstdlib>

using namespace std;

int main() {
	int matriz [5][5];//Declaramos una matriz
	int matriz2 [5][5];//Declaramos la segunda matriz
	int matriz3 [5][5];//Declaramos la tercera matriz
	for (int fila = 0; fila<5; fila++){//ciclo for para las filas de la matriz
		for (int columna = 0; columna<5; columna++){//ciclo para las columnas de la matriz
		matriz[fila][columna]=0;
		if ( fila == 4 || columna == 2){
			matriz2[fila][columna]=0;
		}
		else{
			matriz2[fila][columna]=1;
		}
		
		matriz3[fila][columna]=matriz[fila][columna]+matriz2[fila][columna];
	}
	}
		for (int fila = 0; fila<5; fila++){//ciclo for para las filas de la matriz
		for (int columna = 0; columna<5; columna++){//ciclo para las columnas de la matriz
			cout<<matriz3[fila][columna]<<"\t";
	}
	cout<<endl;
}
	return 0;
}
