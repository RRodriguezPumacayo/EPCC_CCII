/*
||||||||||||||||||||||||||||||||||||||
|||           DOCUMENTO            |||
||| NOMBRE: RICARDO ALEXANDER      |||
||| APELLIDOS: RODRIGUEZ PUMACAYO  |||
||| GRUPO: "B"                     |||
||| CUI: 20200720                  |||
|||                                |||
||||||||||||||||||||||||||||||||||||||

LIBRERIAS:

1) #include<iostream>
    Libreria estandar de C++

2) #include<vector>
    Use la libreria vector para poder manipular el ejercicio,
    gracias a las funciones que proporciona
    Para crear una matriz usando vector, se declara de la siguiente forma:
        -> vector<vector<int>> #MATRIZ DOBLE
        -> vector<vector<vector<int>>> #MATRIZ TRIDIMENCIONAL

3) #include<iomanip>
    Use la funcion setw de la libreria <iomanip> para que la matriz se vea
    mejor. Debido a que con setw( indica el espacio ), declaro el espacio para el siguiente elemento
    de la lista.
    EJEMPLO:
        -> std::cout<<std::setw(4)<<"HOLA";
            1. ____HOLA;

*/
#include<iostream>
#include<vector>
#include<iomanip>

int multiplicar(std::vector<std::vector<std::vector<int>>> &matrix, int value)//USO "&" en matrix, para que los cambios en matrix se guarden
{
    //matrix.size(), numero de caras
    for(int i{0};i<matrix.size();++i){
        //matriz[0].size(), numero de filas
        for(int j{0};j<matrix[0].size();++j){
            //matriz[0][0].size(), numero de columnas
            for(int k{0};k<matrix[0][0].size();++k){
                matrix[i][j][k] = matrix[i][j][k]*value;
            }
        }
    }
}

int mostrar(std::vector<std::vector<std::vector<int>>> matrix)
{
    //matrix.size(), numero de caras
    for(int i{0};i<matrix.size();++i){
         //matriz[0].size(), numero de filas
        for(int j{0};j<matrix[0].size();++j){
            std::cout<<"[";
            //matriz[0][0].size(), numero de columnas
            for(int k{0};k<matrix[0][0].size();++k){
                std::cout<<std::setw(4)<<matrix[i][j][k];
            }
            std::cout<<"]";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    //CASO DEL EXAMEN
    /*
    int x[3][3][3] = {{{1,2,3},{4,5,6},{7,8,9}},
                      {{11,12,13},{14,15,16},{17,18,19}},
                      {{21,21,23},{24,25,26},{27,28,29}}
                     };
    */
    //CASO DEL EJERCICIO
    /*
    int x[3][4][2] = {{{1, 2}, {4, 5}, {7, 8}, {1, 2}},
                    {{10, 11}, {13, 14}, {16, 17}, {1, 2}},
                    {{19, 20}, {22, 23}, {25, 26}, {1, 2}}};
    */
    //USE vector PARA PODER MANIPULAR EL EJERCICIO
    int value;
    std::vector<std::vector<std::vector<int>>> int_matriz{{{1, 2}, {4, 5}, {7, 8}, {1, 2}},
                    {{10, 11}, {13, 14}, {16, 17}, {1, 2}},
                    {{19, 20}, {22, 23}, {25, 26}, {1, 2}}};
    std::cout<<"Ingrese el valor por el cual se multiplicara la matriz: ";std::cin>>value;
    std::cout<<"MATRIZ ORIGINAL"<<std::endl;
    mostrar(int_matriz);
    std::cout<<"MATRIZ MULTIPLICADA"<<std::endl;
    multiplicar(int_matriz, value);
    mostrar(int_matriz);

    return 0;
}
