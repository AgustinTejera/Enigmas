#include <iostream>
#include <math.h>
using namespace std;

//PROTOTIPO
int cantidadCuadrados(int );

int main() {
   int numero;
   cout << "Cuadrado de 4x4"<< endl;
   cout << "Ingrese un numero para fila y columna: " << endl;

   cin>> numero;
   cout << "¿Cuánta cantidad de cuadrados hay en total?" << endl;
	cout << "La cantidad de cuadrados que hay es: " <<cantidadCuadrados(numero)<< endl;

	return 0;
}

//FUNCIÓN
int cantidadCuadrados(int numero){
   int total = 0;
   for(int i=1;i<=numero;i++){
         total += pow(i,2);
      }
   return total;
}
