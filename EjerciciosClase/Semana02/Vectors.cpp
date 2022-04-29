/*
Your job is to write a program that reads integers from
the standard input, sorts them into ascending order, and
then prints the sorted numbers, one per line.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int ascending(int num)
{
    cout<<"|||  CADENA  |||"<<endl;
    int order[num],aux;

    //Para automatizar la lista, agregue "rand()" para asignar valores a los elementos de la lista.
    for(int i{0};i<num;i++){
        //Aqui defino el rango del rand()
        order[i] = rand();
        //rand() asignara a order[i] un numero aleatorio entre 0 a 1000
        order[i] = rand()%1000;
        //Output of list order[i]
        cout<<order[i]<<"\t";
    }
    cout<<endl;

    //Aqui se ordernan de forma ascendente
    cout<<"\n||| ASCENDENTE |||"<<endl;
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
    for(int i{0};i<num;i++){
        cout<<order[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    int num;
    cout<<"|||\t EXERCISE \t|||\n";
    cout<<"3. Ascending Order\n";
    cout<<"Tamanio de la lista: ";cin>>num;
    //Data output
    ascending(num);

}
