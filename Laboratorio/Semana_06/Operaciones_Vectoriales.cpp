#include <iostream>
using namespace std; //Se importa std
/*
	Metodo para sumar 2 vectores A y B de tamano n y guardar el resultado en un vector C
	suma(n=numero de parametros de los arrays, A=Primer array para sumar, B=Segunda array para sumar, C=array para guardar resultados)
	
*/
void suma (int n, double A[], double B[], double C[])
{
	for(int i=0;i<n;i++){

		C[i]=A[i]+B[i];	

	}

}

/*
	Metodo para restar 2 vectores A y B de tamano n y guardar el resultado en un vector C
	resta(n=numero de parametros de los arrays, A=Primer array para sumar, B=Segunda array para sumar, C=array para guardar resultados)
	
*/
void resta (int n, double A[], double B[], double C[])
{
	for(int i=0;i<n;i++){

		C[i]=A[i]-B[i];	

	}

}

/*
	Metodo para restar 2 vectores A y B de tamano n y guardar el resultado en un vector C
	producto_por_escalar(n=numero de parametros de los arrays, A=Array a multiplicar,C=array para guardar resultados, k=escalar a multiplicar)
	
*/
void producto_por_escalar (int n, double A[], double C[],double k)
{
	for(int i=0;i<n;i++){

		C[i]=k*A[i];	

	}

}

/*
	Metodo para encontrar el producto interno entre 2 vectores A y B de tamano n
	producto_interno(n=numero de parametros de los arrays, A=Primer a operar, B=Segunda array a operar)
	return(d=resultado de calcular el producto interno)
	
*/
double producto_interno (int n, double A[], double B[])
{
	double d;

	for(int i=0;i<n;i++){

		d+=A[i]*B[i];	

	}	
	return d;
}


/*
	Metodo para comprobar la ortogonalidad de 2 vectores A y B de tamano n
	ortogonalidad(n=numero de parametros de los arrays, A=Primer array para verificar, B=Segunda array para verificar)
	Utiliza la funcion producto_interno definida anteriormente
	return(true si el producto interno es 0, false de lo contrario)
*/
bool ortogonalidad(int n, double A[], double B[]){
	double d=producto_interno(n,A,B);
	if(d==0){
		return true;
	}
	else{
		return false;
	}
}


/*
	Metodo para restar imprimir un vector C de tamano n
	print_(n=numero de parametros de los arrays, C=array para imprimir)
	
*/
void print_(int n, double C[]){
	cout<<"(";

	for(int i=0;i<n;i++){
		cout<<C[i]<<", ";
	}

	cout<<")\n"<<endl;
}

int main()
{
	const int n=3;//Se define el numero de elementos que tendra cada array
	//Se crean los arrays a usar
	double A[n]={1,2,3};
	double B[n]={3,4,5};
	int k=5;//Escalar para realizar multiplicacion por escalar mas adelante
	double C[n];//Array para guardar los resultados de las operaciones

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

//g++ -std=c++14 -Wall -Wextra -pedantic Operaciones_Vectoriales.cpp -o operaciones_vectoriales.out && ./operaciones_vectoriales.out