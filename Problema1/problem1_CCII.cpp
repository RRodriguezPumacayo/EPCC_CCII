#include<iostream>
#include<stdlib.h>

using namespace std;

//Exercise: Print a multiplication table, since 1-10
//Exercise 2: Ride a program that reads integers from the standard input, sorts them into ascending order, and then print the sorted numbers, one per line

int multiplication(int num)
{
    cout<<"|||      Multiplication Table    |||"<<endl;
    for(int i{1};i<=10;i++){
        for(int j{1};j<=10;j++){
            cout<<"|"<<i*j<<"\t";
        }
        cout<<endl;
    }
}

int ascending(int num)
{
    cout<<"|||  CADENA  |||"<<endl;
    string cadena[num];
    int order[num],aux;

    for(int i{0};i<num;i++){
        order[i] = rand();
        order[i] = rand()%100;
        cadena[i] = order[i];
        cout<<cadena[i]<<"\t";
    }
    cout<<endl;

    for(int i{0};i<num;i++){
        cout<<order[i]<<"\t";
    }
    cout<<"\n||| ASCENDENTE |||"<<endl;
    for(int i{1};i<=num;i++){
        for(int j{num};j>=i;j--){
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
    cout<<"|||\t MENU \t|||\n";
    cout<<"1. Multiplication Table\n";
    cout<<"2. Ascending Order\n";
    cout<<"3. Exit\n";
    cout<<"CHOICE AND OPTION: \n";
    int opc;
    do{

        cin>>opc;
        if(opc==1){
            multiplication(10);
        }
        if(opc==2){
            ascending(10);
        }
        if(opc==3){
            cout<<"Closing program...";
        }
        else{
            cout<<"Choose a valid option"<<endl;
        }
    }
    while(opc!=3);

}
