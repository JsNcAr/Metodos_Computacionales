#include <iostream>
#include <string>
#include <math.h>  

using namespace std;//Para remover la necesidad de llamar a std cada vez que se use la libreria estandar
int main()
{
    //Enviar mensaje a la consola
    cout<<"Hola Mundo"<<endl;
    
    int a = 2;

    float b = 5.;

    double c = 5*pow(10,-10); //double tiene mas precision

    cout<<"a = "<< a << " b = " << b << " c = " << c <<endl;

    int s;

    //cin le pide  al usuario un input y lo guarda en la variable indicada
    //cout<<"ingrese valor ";cin>> s;cout<<"el valor ingresado fue :"<<s<<endl;


    //const lockea una variable a un valor determinado
    const char CONSTANTE[] = "Constante";

    //Se cambia el valor de la variable a
    a = 10;

    cout<<"Nueva a: "<< a<<endl;

    //Se crea una variable binaria
    int v = 0b11;

    cout<<"Numero binario: "<<v<<endl;

    return 0;
}