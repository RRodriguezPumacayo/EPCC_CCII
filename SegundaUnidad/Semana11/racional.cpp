/*
2. racional.cpp. Implemente una clase genérica Racional que represente un
número racional, es decir, un número de la forma x / y donde x e y son
números enteros, con y distinto de cero. La clase debe cumplir los
siguientes requisitos:
a) Proporcione un constructor que tome dos argumentos
correspondientes al numerador y denominador. El primer argumento

debe ser cero por defecto, el segundo argumento debe ser uno por
defecto.
b) La clase debe proporcionar un constructor copia, operador de
asignación.
c) Proporcione los operadores de suma, resta, multiplicación y división.
d) Proporcione los operadores +=, -=, *= y /=.
e) Implemente una función double que devuelva la mejor aproximación
del racional como un doble.
f) Implemente el operador de inserción para leer un número racional en
con el formato como “-15/23”.
g) Mantenga el número racional es su forma reducida, es decir, el
numerador y el denominador son coprimos.
*/
#include<iostream>
#include<iomanip>
using namespace std;

class Racional{
    private:
        int numerador;
        int denominador;
    public:
        Racional(int, int);
        Racional(const Racional&);
        //Racional& operador(const Racional&);
        Racional& operator=(const Racional& src){
            cout << "Copy Assignment is called " << endl;
            numerador = src.numerador;
            denominador = src.denominador;
            return *this;
        }
        auto mostrar();
        ~Racional() = default;

        int suma();
        int resta();
        int multiplicacion();
        int division();
        double bstAprox();
        double simplificar();
};

Racional::Racional(int x=0, int y=1){
    cout<<"|||  Constructor Original    |||"<<endl;
    numerador = x;
    denominador = y;
}

Racional::Racional(const Racional& obj){
    cout<<"|||  Constructor Copia   |||"<<endl;
    numerador = obj.numerador;
    denominador = obj.denominador;
}

auto Racional::mostrar(){
    return pair<int, int>(numerador, denominador);
}

//  |||     OPERACIONES  |||

int Racional::suma(){
    int sum{0};
    cout<<"-    Suma del Numerador y el Denominador es = ";
    sum += numerador + denominador;
    cout<<sum<<endl;
}

int Racional::resta(){
    int res{0};
    cout<<"-    Resta del Numerador y el Denominador es = ";
    res = numerador - denominador;
    cout<<res<<endl;
}

int Racional::multiplicacion(){
    int mul{1};
    cout<<"-    Multiplicacion del Numerador y el Denominador es = ";
    mul *= numerador * denominador;
    cout<<mul<<endl;
}

int Racional::division(){
    double div{1};
    cout<<"-    Division del Numerador y el Denominador es = ";
    //div = 1.0*numerador/ (denominador * 1.0);
    div = static_cast<double>(numerador) / denominador;
    cout<<div<<endl;
}

/////////////////////////////////////////////////////////////////////////

double Racional::bstAprox(){
    double div{1};
    div = static_cast<double>(numerador) / denominador;//static_cast<double> template para poder dividir y sacar un double
    cout<<"-    Mejor aproximado = "<<setiosflags(ios::fixed)<<setprecision(1)<<div<<endl;
    return div;
}

double Racional::simplificar(){
    int con{0};
    int multiplo{0};
    int aux{0};
    int i{2};
    cout<<"-    Numero Racional Simplificado = ";
    if(numerador<denominador)
        aux = numerador;
    else
        aux = denominador;
    while(i<=aux&&con==0){
        if(numerador%i==0 && denominador%i==0){
            multiplo = i;
            con = 1;
        }
        i++;
        if(con==1){
            numerador = numerador/multiplo;
            denominador = denominador/multiplo;
        }
    }
    cout<<numerador<<"/"<<denominador<<endl;
}


int main()
{
    // Con el constructor Original
    Racional original(30, 46);
    cout<<"Numerador: "<<original.mostrar().first<<endl;
    cout<<"Denominador: "<<original.mostrar().second<<endl;
    original.suma();
    original.resta();
    original.multiplicacion();
    original.division();
    original.bstAprox();
    original.simplificar();
    cout<<"Numerador: "<<original.mostrar().first<<endl;
    cout<<"Denominador: "<<original.mostrar().second<<endl;
    /////////////////////////////////////////////////////////
    //  Con el constructor copia
    cout<<endl;
    Racional copia(original);
    cout<<"Numerador: "<<original.mostrar().first<<endl;
    cout<<"Denominador: "<<original.mostrar().second<<endl;
    original.suma();
    original.resta();
    original.multiplicacion();
    original.division();
    original.bstAprox();
    original.simplificar();
    cout<<"Numerador: "<<original.mostrar().first<<endl;
    cout<<"Denominador: "<<original.mostrar().second<<endl;
    /////////////////////////////////////////////////////////
}
