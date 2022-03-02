#include <iostream>
using namespace std; //Se importa std

void suma(int n,int m, double A[][], double B[][], double D[][]){
	for(int i=;i<n;i++){
		for(int j=;j<m;j++){
			D[i][j]=A[i][j]+B[i][j];
		}
	}
}

int main()
{
	const int n=2;
	const int m=3;

	double A[n][m]={{1,2,3},{4,5,6}};
	double B[n][m]={{6,5,4},{3,2,1}};
	double C[m][n]={{1,2},{3,4},{5,6}};

	double k=2.5;

	double D[n][m];
	return 0;
}

//g++ -std=c++14 -Wall -Wextra -pedantic Operaciones_Matriciales.cpp -o operaciones_matriciales.out && ./operaciones_matriciales.out