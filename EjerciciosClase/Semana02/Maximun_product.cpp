/*
Ejercicio
Producto m�ximo de dos n�meros en una secuencia
� Dada una secuencia de n n�meros no negativos y mayores que cero. � El objetivo es encontrar el mayor n�mero que se pueda obtener
multiplicando dos n�meros
*/

#include<iostream>
using namespace std;

int max_product(int num){
    if(num>0){
        int order[num],aux,high;

        //Para automatizar la lista, agregue "rand()" para asignar valores a los elementos de la lista.
        for(int i{0};i<num;i++){
            //Aqui defino el rango del rand()
            order[i] = rand();
            //rand() asignara a order[i] un numero aleatorio entre 0 a 1000
            order[i] = rand()%num;
            //Output of list order[i]
            cout<<order[i]<<"\t";
        }
        cout<<endl;

        for(int i{1};i<=num;i++){
            for(int j{num};j>=i;j--){
            //Para el ordenamiento usa el metodo Burbuja
                if(order[j-1]>order[j]){
                    aux = order[j-1];
                    order[j-1] = order[j];
                    order[j] = aux;
                }
            }
        }
        //Output of the two bigger numbers
        cout<<"The two bigger numbers are:\n";
        cout<<"1: "<<order[num-1]<<"\n";
        cout<<"2: "<<order[num-2]<<"\n";
        high = order[num-1]*order[num-2];
        //Output of the max product
        cout<<"the maximum product is: "<<high;
    }
    else
        cout<<"El number is zero(0) or is negative ";
}

int main()
{
    int num;
    cout<<"|||\t EXERCISE \t|||\n";
    cout<<"1. Maximum product\n";
    //Declaration of the size of the sequence 'n'
    cout<<"Tamanio de la lista: ";cin>>num;
    //Data output
    max_product(num);

}
