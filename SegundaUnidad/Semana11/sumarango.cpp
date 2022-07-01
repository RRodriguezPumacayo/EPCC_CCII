/*
6. sumarango.cpp. Escriba una funci�n template que tome un �nico
par�metro de tipo T y que acepte cuatro argumentos: un array de tipo T,
un �ndice de inicio, un �ndice de finalizaci�n (inclusivo) y un valor inicial
opcional. La funci�n debe devolver la suma de todos los elementos del
array en el rango especificado y el valor inicial.
*/
#include<iostream>
using namespace std;

template<typename T> void myMax(T array[], T x, T y, T init){
    int sum{0};
    array[0] = init;
    sum += array[0];
    cout<<"["<<0<<"] = "<<array[0]<<endl;
    for(int i{x};i<y;i++){
        array[i] = i;
        cout<<"["<<i<<"] = "<<array[i]<<endl;
        sum += array[i];
    }
    cout<<"La suma de los valores es = "<<sum<<endl;
}

int main()
{
    int arr[5];
    myMax(arr, 5, 10, 3);
}
