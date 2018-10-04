#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	char x[4][4];//4 filas y 4 columnas para espacio de memoria
	for (int i=0; i<=2; i++)
	{	
		for (int j=2; j>=2; j--)
		{
			x[i][i]='x';
		}
			
	}
	for (int i=0; i<=3; i++)
	{	
		x[0][1]=3;
		if (i=3){
			x[3][2]=3;
		}
	}
	cout<<x[0][1]<<endl;
	return 0;
}
