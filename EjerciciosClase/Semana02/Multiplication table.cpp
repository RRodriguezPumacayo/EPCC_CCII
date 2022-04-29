//Exercise: Print a multiplication table, since 1-10

#include<iostream>
using namespace std;

//Multiplication table function
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

int main()
{
    cout<<"|||\t EXERCISE \t|||\n";
    cout<<"2. Multiplication Table\n";
    //Data output
    //  Como solo nos pide la tabla del 10, por eso opte por poner 10 en lugar de pedir el numero.
    multiplication(10);
}
