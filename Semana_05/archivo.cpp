 //g++ -std=c++14 -Wall -Wextra -pedantic archivo.cpp -o exe && ./exe

//Nicolás Arias - 201820623
//Maria Camila Manosalva - 201920999
//Rodrigo Jaimes - 201716463

#include <iostream>
#include <math.h> //Se importan las funciones matemáticas con las que cuenta c++
using namespace std; //Se importa std
using std::string; //Se importa el string

double exp(int x, int n ){//Metodo del punto 09
  double y = 0.;
  int f = 1;

  for(int i = 0; i<n;i++){
    if (i==0){
      y+=pow(x,i)/f;
    }
    else{
      f=f*i;
      y+=pow(x,i)/f ;
      cout<<"X = "<<f<<"Y = "<<y<<endl;
    }
  }

    return y;
}

int main() {

  //1. Suma de números------------------------------------------------------
  //Se crean las variables
  int a;
  int b = 0;
  int temp = 0;

  cout << "Ingrese la cantidad de números a sumar "; // Se coloca para asignar el número de números a sumar
  cin>>a;

  for (int i=0;i<a;i++){
    cout<<"Ingrese número a sumar "<<endl; // Se asignan los números que se sumarán
    cin>>temp;
    b+=temp;
  }

  cout<<"El resultado de la suma es"<<b<<endl;


  //2. Sumar cuadrados------------------------------------------------
  //Se crean las variables
  int e;
  int x = 0;
  int n = 0;
  cout << "Ingrese la cantidad de números (cuadrados) a sumar "; // Se coloca para asignar el número de números cuyos cuadrados se suman
  cin>>e;

  for (int i=0;i<e;i++){
    cout<<"Ingrese número a sumar "<<endl; //Se asignan los números cuyos cuadrados se sumarán
    cin>>n;
    x+=pow(n,2);//Se utiliza pow para elevar el número al cuadrado
  }

  cout<<"la suma de los cuadrados es: "<<x<<endl;

  //3. Binario de un número entero. ------------------------------------------
  cout<< "Ingrese un numero entero positivo";
  //pedimos el número para cambiar
  int numero;
  string binario="";
  //creamos un string como cadena vacía para que podamos escribir acá la respuesta
  cin>> numero;
  if (numero>0){
    while (numero>0){
      if (numero%2==0){
        binario="0"+binario;
      } else {
        binario="1"+binario;
      }
      numero=(int) numero/2;
    }
    //decidimos con esta parte del código si se da un 1 o 0 a la respuesta
  }else if (numero==0) {
    binario="0";
    //ya no es necesario seguir repitiendo el proceso en esta condición
  }
  cout<<"El resultado del numero ingresado como binario es: " <<binario<<endl;

  //4. Hexadecimal --------------------------------------------
    int w;
    int r;
  //un número que ayudara a crear y usar el while
    string hexaw="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	  cout << "Inserte un numero entero positivo: ";
  //pedimos un numero para cambiarlo
	  cin>> w;
		while(w>0){
      r = w % 16;
      hexaw = hex[r] + hexaw;
      w = w/16;
    }
  // en el while miramos si el numero es positivo como se pidio, luego vemos su residuo dividido 16 para elegir la posición de la letra o numero al que cambiara w y luego se divide hasta 0
    cout<<" El numero hexadecimal es : "<<hexaw<<endl;

  //5. Máximo y el mínimo. ------------------------------------

  a=0;
  cout<<"Maximo y minimo "<<endl;
  cout<<"Cuantos numeros va a ingresar?"<<endl;
  cin>>a;
  int list_max_min[a-1];

  //Crea la lista basada en el input de los usuarios
  for (int i=0;i<a;i++){
    cout<<"Ingrese numero para la lista "<<endl;
    //Guarda el numero ingresado en la lista
    cin>>list_max_min[i];
  }

  temp=0;
  int temp_index=0;
  //Busqueda maximo
  for (int i=0;i<a;i++){
    if (i==0){ //Guarda por defecto el primer numero como maximo y luego lo compara con los demas
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
  //Busqueda minimo
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
  cout<<"El Minimo fue el numero "<<temp<<" en la posicion "<<temp_index+1<<endl;


  //6. Fibbonacci ----------------------------------------------------------
  //Se crean las variables a utilizar para el programa
  int fib0 = 0;
  int fib1 = 1;
  int lim = 0;
  int i = 0;

  cout << "Ingrese un numero para la sucesion de fibonacci: "; //Se inserta la posición n hasta la cual se desea imprimir el código
  cin >> lim;


  if(lim > 0) { //Se coloca un condicional para cuando la variable lim sea mayor que cero se recorra el siguiente ciclo
    for(i = 1; i <= lim; i++) { //Se crea un ciclo desde i=1, y con i menor o igual a la variable lim
      cout << fib0 << " "; //Se imprime el número en la posición inicial de Fibonacci
      fib1 += fib0; // Se realiza el método para seguir con la sucesión, sumando el inicial más el siguiente para obtener el tercer valor, el segundo más el tercero para obtener el cuarto y así
      fib0 = fib1 - fib0; //Se reasigna el valor del fib inicial
    }
  } else { //Si la condición no cumple aparece el mensaje que el número debe ser mayor a cero
    cout << "El numero debe ser mayor a cero!!" << endl;
  }
  cout << "\n";




  //7. Suma dígitos ---------------------------------------------------
    int extNum, dig_sum = 0, numEntero;
    cout<< "Ingrese un numero entero: ";
    cin >> numEntero;
    while(numEntero != 0) {
        extNum = numEntero % 10;
        numEntero /= 10;
        dig_sum += extNum;
    }
    cout << "El resultado de sumar los dígitos del número es: " << dig_sum << endl;



  //8. Nsimo primo ---------------------------------------------------



  //9. e^x ----------------------------------------------------------------
  n=0;
  x=0;

  cout<<"ingrese el orden de la aproximacion "<<endl;
  cin>>n;

  cout<<"ingrese el valor de x "<<endl;
  cin>>x;
  double aprox = exp(x,n);
  cout<<"El valor aproximado es "<<aprox<<endl;



  return 0;
}




//Github: https://github.com/JsNcAr/Metodos_Computacionales/tree/main/Semana_05
