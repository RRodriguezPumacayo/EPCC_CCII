/*
1. contador.cpp. Implemente una clase Contador que represente un
contador de enteros simple. La clase debe satisfacer los siguientes
requisitos:
a) Proporcione un constructor que tome un solo argumento int que se
use para inicializar el valor del contador. El argumento debe ser cero
por defecto.
b) Sobrecarge los operadores de incremento prefijo y de incremento
posfijo para proporcionar un medio por el cual incrementar el valor
del contador.
c) Proporcione una función miembro valor() que devuelva el valor actual
del contador.
d) Además, la clase debe saber cuántos objetos Contador existen
actualmente. Proporcione una interfaz para consultar este valor. El
código no debe utilizar ninguna variable global. Use miembros
estáticos.
*/
#include<iostream>
#include<iomanip>
using namespace std;

class Contador{
    private:
        int contEnt{0};
        static int contador_instancias;
    public:
        inline static unsigned total_instances(){
            return contador_instancias;
        }
        Contador(int);
        ~Contador();
        int mostrar();
        int value();
        Contador& operator ++();//Incremento Prefijo
        Contador operator ++(int n);//Incremento Postfijo
};

int Contador::contador_instancias=0;

Contador::Contador(int x=0){
    contEnt = x;
    ++contador_instancias;
}

Contador::~Contador(){

}

int Contador::value(){
    cout<<"Estado del Contador = "<<contEnt<<endl;
}

int Contador::mostrar(){
    for(int i{0};i<contEnt;i++){
        cout<<i<<setw(4);
    }
    cout<<endl;
}

//DEFINIR INCREMENTO PREFIJO
Contador& Contador::operator++()
{
    contEnt++;
    return *this;
}

//DEFINIR INCREMENTO POSTFIJO
Contador Contador::operator++(int n)
{
    Contador result = *this;
    if(n!=0)
        contEnt += n;
    else
        contEnt++;
    return result;
}

int main()
{
    int opc;
    do{
        cout<<"|||  Presione 1 para ver la Cantidad de Objetos  |||\n";
        cout<<"|||  Presione 2 para ver/crear los Objetos       |||\n";
        cout<<"|||  Presione 3 para terminar el Programa        |||\n";
        cin>>opc;
        if(opc==1)
        {
            cout<<"Cantidad de Objetos es = "<<Contador::total_instances()<<endl;
        }
        if(opc==2)
        {
            cout<<"\nOBJETO 1\n";
            Contador ejemplo1(5);
            ejemplo1.value();
            ejemplo1.mostrar();
            cout<<"Postfijo : "<<endl;
            ejemplo1.operator++(25);
            ejemplo1.value();
            ejemplo1.mostrar();

            cout<<"\nOBJETO 2\n";
            Contador ejemplo2(10);
            ejemplo2.value();
            ejemplo2.mostrar();
            cout<<"Postfijo : "<<endl;
            ejemplo2.operator++(25);
            ejemplo2.value();
            ejemplo2.mostrar();

            cout<<"\nOBJETO 3\n";
            Contador ejemplo3;
            ejemplo3.value();
            ejemplo3.mostrar();
            cout<<"Postfijo : "<<endl;
            ejemplo3.operator++(25);
            ejemplo3.value();
            ejemplo3.mostrar();
        }
    }
    while(opc!=3);

}
