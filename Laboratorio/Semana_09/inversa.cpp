#include <iostream>
using namespace std; //Se importa std

const int N = 4;

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

int main()
{
	
	float A[N][N] = {{2,0,1,0},{2,1,1,0},{0,0,-2,0},{0,0,2,1}};
	
	int i,j,k,l;
	
	float r;
	
	for(i = 0; i < N; i++) {
		
		r = A[i][i];
	
		for(j = i; j < N; j++){
			
			A[i][j] /= r;
		}
	}
	
	/*
	for(i = 1; i < N-1; i++){
		
		r = A[i][i-1];
		
		if(r != 0){
			for(j = 0; j < N; j++){
				
				A[i][j] -= r*A[i-1][j];
			}
		}
	}
	
	//Int2
	for(i = 0; i < N-1; i++){
		for(j = i+1; j < N; j++){
			
			r = A[j][j-1];
			if(r !=0){
				cout<<"Entro"<<endl;
				for(k = 0; k < N; k++){
					A[j][k] -= r*A[j-1][k];
				}
			}
		}
	}
	
	*/
	
	for(i = 0; i < N; i++){
		for(j = i+1; j < N; j++){
			r = A[j][i];
			if(r != 0){
				for(k = 0; k < N; k++){
					A[j][k] -=  r*A[i][k];
				}
			}
		}
	}
	
	print__(A);
}



//g++ -std=c++14 -Wall -Wextra -pedantic inversa.cpp -o inversa.out && ./inversa.out
