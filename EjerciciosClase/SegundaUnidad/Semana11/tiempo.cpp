/*
3. tiempo.cpp. Implemente una clase que maneje tiempos sin fechas, en
formato de 24 horas. Por ejemplo, Tiempo(6, 45, 30) representa 6 horas
con 45 minutos y 30 segundos.
a) Sobrecargue los operadores + y - para sumar y restar tiempos. Por
ejemplo si definimos Tiempo t1(12, 45, 30) y t2(0, 30, 35) la suma t1 +
t2 debe resultar en Tiempo(13, 16, 5)
b) Sobrecargue los operadores de igualdad ==, != y de comparación <, >,
<=, >=
c) Sobrecargue el operador de extracción para mostrar las horas.
d) Implemente métodos adecuados para mostrar las horas en formato
am / pm.
*/
#include<iostream>
#include<iomanip>
using namespace std;

class Tiempo{
    private:
        int horas;
        int minutos;
        int segundos;
    public:
        Tiempo(int, int, int);
        Tiempo(const Tiempo&);
        int mostrarHora();
        int mostrarMinutos();
        int mostrarSegundos();
        int operator + (const Tiempo&);
        int operator - (const Tiempo&);
        bool operator == (const Tiempo&);
        bool operator != (const Tiempo&);
        Tiempo operator < (const Tiempo&);
        Tiempo operator > (const Tiempo&);
        Tiempo operator <= (const Tiempo&);
        Tiempo operator >= (const Tiempo&);
        friend ostream &operator << (ostream &output, const Tiempo &T)
        {
            if(T.horas>12){
                output<<T.horas<<"h: "<<T.minutos<<"m: "<<T.segundos<<"s pm"<<endl;
            }
            else
                output<<T.horas<<"h: "<<T.minutos<<"m: "<<T.segundos<<"s am"<<endl;
        }
};

Tiempo::Tiempo(int x, int y, int z){
    horas = x;
    minutos = y;
    segundos = z;
}

Tiempo::Tiempo(const Tiempo& obj){
    horas = obj.horas;
    minutos = obj.minutos;
    segundos = obj.segundos;
}

int Tiempo::mostrarHora()
{
    return horas;
}

int Tiempo::mostrarMinutos()
{
    return minutos;
}

int Tiempo::mostrarSegundos()
{
    return segundos;
}

int Tiempo::operator + (const Tiempo& T){
    horas += T.horas;
    minutos += T.minutos;
    segundos += T.segundos;

    while(segundos>60){
        if(segundos==60){
            segundos = 0;
            ++minutos;
            break;
        }
        segundos -= 60;
        ++minutos;
    }
    while(minutos>60){
        if(minutos==60){
            minutos = 0;
            ++horas;
            break;
        }
        minutos -= 60;
        ++horas;
    }
    while(horas>24){
        if(horas==24){
            horas -=24;
        }
        horas -= 24;
    }
}

int Tiempo::operator - (const Tiempo& T){
    horas -= T.horas;
    minutos -= T.minutos;
    segundos -= T.segundos;

    if(horas<0)
        horas = 0;
    if(minutos<0){
        minutos = -minutos;
        --horas;
    }
    if(segundos<0){
        segundos = -segundos;
        --minutos;
    }

    while(segundos>60){
        if(segundos==60){
            segundos = 0;
            ++minutos;
            break;
        }
        segundos -= 60;
        ++minutos;
    }
    while(minutos>60){
        if(minutos==60){
            minutos = 0;
            ++horas;
            break;
        }
        minutos -= 60;
        ++horas;
    }
    while(horas>24){
        if(horas==24){
            horas -=24;
        }
        horas -= 24;
    }
}

bool Tiempo::operator == (const Tiempo& T){
    if(horas == T.horas && minutos==T.minutos && segundos==T.segundos)
        return true;
}

bool Tiempo::operator != (const Tiempo& T){
    if(horas != T.horas && minutos!=T.minutos && segundos!=T.segundos)
        return true;
}

Tiempo Tiempo::operator < (const Tiempo& T){

}

Tiempo Tiempo::operator > (const Tiempo& T){

}

Tiempo Tiempo::operator <= (const Tiempo& T){

}

Tiempo Tiempo::operator >= (const Tiempo& T){

}

int main()
{
    Tiempo T(25,179,61);
    Tiempo T2(1,30,60);
    cout<<T;
    cout<<T2;
    T+T2;
    T-T2;
    if((T==T2)==true){
        cout<<"Los Tiempos 1 y 2 Si son iguales"<<endl;
    }
    if(T!=T2){
        cout<<"Los Tiempos 1 y 2 NO son iguales"<<endl;
    }
    cout<<T;
}
