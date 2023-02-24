#include <iostream>
using namespace std; //Se importa std


const int n=2;
const int m=3;

void suma(double A[n][m], double B[n][m], double D[n][m]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			D[i][j]=A[i][j]+B[i][j];
		}
	}
}

void resta(double A[n][m], double B[n][m], double D[n][m]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			D[i][j]=A[i][j]-B[i][j];
		}
	}
}

void producto_escalar(double A[n][m], double D[n][m], double k){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			D[i][j]=k*A[i][j];
		}
	}
}

void producto_matricial(double A[n][m], double C[m][n], double P[n][n]){
    for(int i=0;i<m;i++){  
        double temp=0;
        
            for(int j=0;j<n;j++){
                temp+=A[i][j]*C[j][i];
                
    }
    cout<<temp<<endl;
    P[i][i]=temp;
}
}

void print_(double D[n][m]){
	cout<<"(";

	for(int i=0;i<n;i++){
        cout<<"[ ";
		for(int j=0;j<m;j++){
			cout<<D[i][j]<<", ";
		}
		cout<<" ]"<<endl;
	}

	cout<<")\n"<<endl;
}

void print_p(double P[n][n]){
	cout<<"(";

	for(int i=0;i<n;i++){
        cout<<"[ ";
		for(int j=0;j<n;j++){
			cout<<P[i][j]<<", ";
		}
		cout<<" ]"<<endl;
	}

	cout<<")\n"<<endl;
}

int main()
{
	double A[n][m]={{1,2,3},{4,5,6}};
	double B[n][m]={{6,5,4},{3,2,1}};
	double C[m][n]={{1,2},{3,4},{5,6}};

	double k=2.5;

	double D[n][m];
    double P[n][n];
    
    suma(A,B,D);
    print_(D);
    
    resta(A,B,D);
    print_(D);
    
    producto_escalar(A,D, k);
    print_(D);
    
    producto_matricial(A,C,P);
    print_p(P);
    
	return 0;
}

//g++ -std=c++14 -Wall -Wextra -pedantic Operaciones_Matriciales.cpp -o operaciones_matriciales.out && ./operaciones_matriciales.out
