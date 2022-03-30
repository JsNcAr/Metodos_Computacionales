#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

using namespace std;


int main()
{
	const int N = 3;
	float r;

	 /*
	 cout<<"Ingrese los valores de la matriz"<< endl;
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n+1;j++)
		  {
			   cout<<"a["<< i<<"]"<< j<<"]= ";
			   cin>>a[i][j];
		  }
	 }


	 algortmos:
	 fila1/a00

	*/
	float a[N][N] = {{2,0,0},{0,-2,0},{0,0,2}};
		
	 for(int i=0;i<N-1;i++)
	 {
		  if(a[i][i] == 0.0)
		  {
			   cout<<"Error!";
			   exit(0);
		  }

		  for(int j=i+1;j<N;j++)
		  {
			   r = a[j][i]/a[i][i];

			   for(int k=1;k<N;k++)
			   {
			  		a[j][k] += -r*a[i][k];
			   }
		  }
	 }



	for(int i=0;i<N;i++){
		cout<<"( ";
		for (int j = 0; j < N; j++)
		{
			cout<<a[i][j]<<", ";
		}
		cout<<" )"<<endl;
		
	}

	 return(0);
}

//g++ -std=c++14 -Wall -Wextra -pedantic archivo.cpp -o archivo.out && ./archivo.out