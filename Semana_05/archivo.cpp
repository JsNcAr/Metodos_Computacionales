 //g++ -std=c++14 -Wall -Wextra -pedantic Plantilla.cpp -o exe && ./exe

#include <iostream>
#include <math.h>
using namespace std;
using std::string;

string toBinary(int n)
  {
    int v=0;
    while (n != 0){
        v += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return v;
  }

int main() {

  //1. Suma de números
  int a;
  int b = 0;
  int temp = 0;
  cout << "Ingrese la cantidad de números a sumar ";
  cin>>a;

  for (int i=0;i<a;i++){
    cout<<"Ingrese número a sumar "<<endl;
    cin>>temp;
    b+=temp;
  }

  cout<<b<<endl;


  //2. Sumar cuadrados
  int e;
  int x = 0;
  int n = 0;
  cout << "Ingrese la cantidad de números (cuadrados) a sumar ";
  cin>>e;

  for (int i=0;i<e;i++){
    cout<<"Ingrese número a sumar "<<endl;
    cin>>n;
    x+=pow(n,2);
  }

  cout<<x<<endl;

  //3. Binario de un número entero.
  //Número binarios int v= 0b11

    int numero;
    cin>>numero;
    cout << "entero: " << numero << endl;
    cout << "binario: " << toBinary(numero) << endl;

  //4. Hexadecimal


  //5. Máximo y el mínimo.

  a=0;
  cout<<"Maximo y minimo "<<endl;
  cout<<"Cuantos numeros va a ingresar"<<endl;
  cin>>a;
  int list_max_min[a-1];

  for (int i=0;i<a;i++){
    cout<<"Ingrese numero para la lista "<<endl;
    cin>>list_max_min[i];
  }

  temp=0;
  int temp_index=0;
  for (int i=0;i<a;i++){
    if (i==0){
      temp=list_max_min[0];
      temp_index=i;
    }
    else if(list_max_min[i]>temp){
      temp=list_max_min[i];
      temp_index=i;
    }
    }
    cout<<"El maximo fue el numero "<<temp<<" en la posicion "<<temp_index+1<<endl;

  temp=0;
  temp_index=0;
  for (int i=0;i<a;i++){
    if (i==0){
      temp=list_max_min[0];
      temp_index=i;
    }
    else if(list_max_min[i]<temp){
      temp=list_max_min[i];
      temp_index=i;
    }
    }


  //6. Fibbonacci
  int fib0 = 0;
  int fib1 = 1;
  int lim = 0;
  int i = 0;

  cout << "Ingrese un numero para la sucesion de fibonacci: ";
  cin >> lim;


  if(lim > 0) {
    for(i = 1; i <= lim; i++) {
      cout << fib0 << " ";
      fib1 += fib0;
      fib0 = fib1 - fib0;
    }
  } else {
    cout << "El numero debe ser mayor a cero!!" << endl;
  }
  cout << "\n";




  //7. Suma dígitos
    int extNum, dig_sum = 0, numEntero;
    cout<< "Ingrese un numero entero: ";
    cin >> numEntero;
    while(numEntero != 0) {
        extNum = numEntero % 10;
        numEntero /= 10;
        dig_sum += extNum;
    }
    cout << "El resultado de sumar los dígitos del número es: " << dig_sum << endl;



  //8. Nsimo primo

  //9. e^x
  n=0;
  cout<<"ingrese el orden de la aproximacion"<<endl;
  cin>>n;
  //for (i = 0; i <= n; i++){

  //}

  return 0;
}




//Github: https://github.com/JsNcAr/Metodos_Computacionales/tree/main/Semana_05
