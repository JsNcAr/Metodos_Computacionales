#include <iostream>
using namespace std; //Se importa std

//jn.arias

void suma(double x,double y,double &z){ //Se suman los valores y se guarda en el puntero de z
	z = x+y;
}

int main()
{
	int a=2;
	int *p;
	p=&a;//& da posicion en memoria
	cout<<p<<endl;
	cout<<*p<<endl;//Valor en esa posicion

	double A[2][3] = {{1,2,3},{4,5,6}};
	cout<<A<<endl;//Imprime posicion en memoria del primer elemento
	cout<<A[0][0]<<endl;
	cout<<&A[0][0]<<endl;// Nuevamente imprime posicion en memoria

	double* q=&A[0][0];

	cout<<"Posiciones de memoria"<<endl;//Comparamos las posiciones de memoria entre ambos metodos
	for (int i = 0; i < 2; ++i)
	{
		for (int j= 0; j < 3; ++j)
		{
			cout<<"q= "<<q<<endl;
			cout<<"P= "<<&A[i][j]<<endl;
			q++;
		}
	}

	cout<<"Tamaño de A[0][0]= "<<sizeof(A[0][0])<<endl;

	double x=1,y=3,z;
	suma(x,y,z);
	cout<<"Suma= "<<z<<endl;


	return 0;
}

//g++ -std=c++14 -Wall -Wextra -pedantic Punteros.cpp -o Punteros.out && ./Punteros.out