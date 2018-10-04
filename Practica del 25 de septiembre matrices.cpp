#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	
	
	int matriz[3][3];
	int matriz2[3][3];
	srand(time(NULL));
	
	for (int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++){
			
			matriz[i][j] = rand() % 100;
		}
	}
	for (int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++){
			cout<<matriz[i][j]<<"	";
}
cout<<endl;
}
cout<<"_______________________________________"<<endl;

	
	for (int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++){
			
			matriz2[i][j] = rand() % 100;
		}
	}
	for (int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++){
			cout<<matriz2[i][j]<<"	";
}

cout<<endl;
}
	return 0;
}
