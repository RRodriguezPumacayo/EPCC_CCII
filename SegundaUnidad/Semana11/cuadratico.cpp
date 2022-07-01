/*
5. cuadrático.cpp. Desarrolle una clase Cuadrática que represente una
función de la forma f(x) = ax^2 + bx + c, donde x es un variable real
y a, b, c son constantes reales. La clase debe cumplir con los siguientes
requisitos:
    a) Proporcione un constructor que tome los valores de a, b y c como
    argumentos. Estos argumentos deben ser cero por defecto.
    b) La clase debe proporcionar constructor copia y operador de
    asignación
    c) Proporcione el operador de llamada a función que tome un solo
    argumento x y devuelva el valor f(x).
*/
#include<iostream>
using namespace std;

class Cuadratica
{
    private:
        double x;
        const double a = 0;
        const double b = 0;
        const double c = 0;
    public:
        Cuadratica(double _a, double _b, double _c):a(_a),b(_b),c(_c){
            double a = 0;
            double b = 0;
            double c = 0;
        }
        //CONSTRUCTOR COPIA
        Cuadratica(const Cuadratica& c1){
            cout<<"Constructor copia llamado"<<endl;
            x = c1.x;
            double a = c1.a;
            double b = c1.b;
            double c = c1.c;
        }
        //OPERADOR DE ASIGNACION
        Cuadratica& operator=(const Cuadratica& n)
        {
            cout<<"Operador de asignacion llamado"<<endl;
            return *this;
        }
        //OPERADOR LLAMADA FUNCION
        Cuadratica& operator()(double n){
            double resultado;
            x = n;
            resultado = a*(x*x) + b*x + c;
            cout<<"f("<<x<<")= "<<resultado<<endl;
            return *this;
        }
};

int main()
{
    Cuadratica valor(2, 3, 4);
    Cuadratica valor1(1, 1, 1);
    Cuadratica valor2(2, 2, 2);
    Cuadratica valor3 = valor;
    valor1 = valor2;
    valor(5);
}
