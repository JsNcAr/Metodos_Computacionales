#include <iostream>
using namespace std; //Se importa std

const int N = 3;
int i,j,k;
float r;

void print__(float A[N][N]){
	
	// Print
	for(int i = 0; i < N; i++){
		cout<<"( ";
		for (int j = 0; j < N; j++)
		{
			cout<<A[i][j]<<", ";
		}
		cout<<" )"<<endl;
		
	}
}

void unificacion(float A[N][N], float B[N][N]){
	for(i = 0; i < N; i++) {
		
		r = A[i][i];
	
		for(j = i; j < N; j++){
			
			A[i][j] /= r;
			B[i][j] /= r;
		}
	}
}

void intermedias(float A[N][N], float B[N][N]){
	for(i = 0; i < N; i++){
		for(j = i+1; j < N; j++){
			r = A[j][i];
			if(r != 0){
				for(k = 0; k < N; k++){
					A[j][k] -=  r*A[i][k];
					B[j][k] -=  r*A[i][k];
				}
			}
		}
	}	
}

void ultima(float A[N][N], float B[N][N]){
	for(i = 0; i < N-1; i++){
		r = A[N-1][i];
		if(r != 0){
			for(j = 0; j < N; j++){
				A[N-1][i] -= r*A[i][j];
				B[N-1][i] -= r*A[i][j];
			}
		}
	}
}
int main()
{
	
	float A[N][N] = {{2,0,1},{0,-2,0},{0,0,2}};
	float B[N][N] = {{1,0,0},{0,1,0},{0,0,1}};
	
	
	
	/* Se transforman los pivotes en 1 */
	unificacion(A, B);
	
	/* Se eliminan los elementos sobrantes de las columnas intermedias */

	intermedias(A, B);

	
	/* Se vuelven a unificar los pivotes */
	unificacion(A, B);
	
	/* Se opera la ultima fila */
	ultima(A, B);
	
	print__(B);
}



//g++ -std=c++14 -Wall -Wextra -pedantic inversa.cpp -o inversa.out && ./inversa.out
