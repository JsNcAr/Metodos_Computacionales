#include <iostream>
#include <math.h> //Se importan las funciones matemáticas con las que cuenta c++
using namespace std; //Se importa std
using std::string; //Se importa el string

void suma (int n, double A[], double B[], double C[])
{
	for(int i=0;i<n;i++){

		C[i]=A[i]+B[i];	

	}

}

void resta (int n, double A[], double B[], double C[])
{
	for(int i=0;i<n;i++){

		C[i]=A[i]-B[i];	

	}

}

void producto_por_escalar (int n, double A[], double C[],double k)
{
	for(int i=0;i<n;i++){

		C[i]=k*A[i];	

	}

}


double producto_interno (int n, double A[], double B[])
{
	double d;

	for(int i=0;i<n;i++){

		d+=A[i]*B[i];	

	}	
	return d;
}


bool ortogonalidad(int n, double A[], double B[]){
	double d=producto_interno(n,A,B);
	if(d==0){
		return true;
	}
	else{
		return false;
	}
}

void print_(int n, double C[]){
	cout<<"(";

	for(int i=0;i<n;i++){
		cout<<C[i]<<", ";
	}

	cout<<")\n"<<endl;
}

int main()
{
	const int n=3;
	double A[n]={1,2,3};
	double B[n]={3,4,5};
	int k=5;
	double C[n];

	cout<<"Suma: "<<endl;
	suma(n,A,B,C);
	print_(n,C);

	cout<<"Resta: "<<endl;
	resta(n,A,B,C);
	print_(n,C);
	
	cout<<"Producto por escalar: "<<endl;
	producto_por_escalar(n,A,C,k);
	print_(n,C);

	cout<<"Producto interno: "<<producto_interno(n,A,B)<<endl;

	cout<<"Ortogonalidad: "<<ortogonalidad(n,A,B)<<endl;



	return 0;
} 

//g++ -std=c++14 -Wall -Wextra -pedantic archivo.cpp -o exe && ./exe
