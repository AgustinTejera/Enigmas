#include <iostream>

using namespace std;

int main() {

    int tableroAjedrez [8][8]={1,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,1};
    int fichasDomino=0;

   cout << "PROBLEMA DEL AJEDREZ MUTILADO"<< endl;
   cout << "Supongamos que tenemos un tablero de ajedrez que, como sabemos, tiene 64 casillas cuadradas,"<< endl;
   cout << "entonces si suprimimos las dos del extremo, nos queda un tablero de ajedrez mutilado."<< endl;
   cout << "Aclaración: 1=casilla mutilada, 0=casilla libre" << endl;

      for(int fila=0;fila<8;fila++){
         for(int columna=0;columna<8;columna++){
            cout << tableroAjedrez[fila][columna];
         }
         cout << endl;
      }
      cout << "¿Es posible colocar 31 fichas de dominó, cada una de tamaño igual a dos casillas del tablero? " << endl;

      for(int fila=0;fila<8;fila++){
            for(int columna=0;columna<8;columna+=2){
               if(tableroAjedrez[fila][columna]==0 && tableroAjedrez[fila][columna+1]==0 and fichasDomino<31){
                  tableroAjedrez[fila][columna]=1;
                  tableroAjedrez[fila][columna+1]=1;
                  fichasDomino++;
               }
               cout << tableroAjedrez[fila][columna] << tableroAjedrez[fila][columna+1];
            }
            cout << endl;
         }
      cout << "SOLUCIÓN: " << endl;
      cout << "No es posible. Como hemos visto, solo entran: " << fichasDomino << " fichas de dominó en el tablero mutilado."<< endl;



   return 0;
}
