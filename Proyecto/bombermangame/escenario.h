#ifndef ESCENARIO_H_INCLUDED
#define ESCENARIO_H_INCLUDED
#include"jugador.h"
#include<ctime>
#include<stdlib.h>
#define filas 17
#define columnas 19
using namespace System::Drawing;

class CEscenario(){
    public:
        CEscenario(){
            matriz = new int*[filas];
        }
        ~CEscenario(){};
        void generarMatriz(){
            srand(time(NULL()));//cada vez que generamos la matriz sera un nulo, esto para que el mapa sea aleatorio;
            for(int i{0};i<filas;i++){
                matriz[i] = new int[columnas];
            }
            for(int i{0};i<filas;i++){
                for(int j{0};j<columnas;j++){
                    if(i==0 || j==0 || i==filas-1 || j==columnas-|){//Map borders
                        matriz[i][j] = 1;
                    }
                    else{
                        if(i%2==0 && j%2==0){//Umbreakable map blocks
                            matriz[i][j] = 1;
                        }
                        else{
                            if((i==1 && (j==1 || j==2)) || //INITIAL ZONE
                                (j==1 && (i==2 || i==filas-2 || i==filas-3)) ||
                                (i==filas-2 && (j==columnas-2 || i==columnas-3)) ||
                                (i==filas-3 && j==columnas-2) ||
                                (j==2 && i==filas-2)
                                ){
                                    matriz[i][j]=0;
                            }
                            else{
                                matriz[i][j] = rand()%2+2;//aqui si el valor es 2 sera un bloque libre y si es 3 sera un bloque destruible
                            }
                        }
                    }
                }
            }
        }

        void pintarBase(Graphics^g, Bitmap^bmpBase);

    private:
        int **matriz;

};

#endif // ESCENARIO_H_INCLUDED

