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

*/
#include<iostream>

float sumafi(float a, int b) {
    return a + b;
}

double restalf(float a, double b) {
    return a - b;
}

long multiplicaid(int a, long b) {
    return a * b;
}

//USE "auto" EN (*op) PARA QUE ADMITE DIFERENTES TIPOS DE FUNCION
//TAMBIEN USE "auto" LUEGO DE (*op), precisamente en "(*op)(auto, auto)"
//ESTO LO HICE PARA QUE RECONOZCA Y ADMITA DIFERENTES TIPOS DE VALORES
//POR ULTIMO NO HICE LO MISMO CON double a, double b, PORQUE NO ERA NECESARIO
//YA QUE ESTOS VALORES PASABAN POR (auto, auto), donde reconocia el valor dado
double funcion(auto (*op)(auto, auto), double a, double b){
    return op(a, b);
}

int main()
{
    std::cout<<funcion(sumafi, 4.0f, 5)<<std::endl;
    std::cout<<sumafi(4.0f, 5)<<std::endl;
    std::cout<<funcion(restalf, 4.0f,5.0)<<std::endl;
    std::cout<<restalf(4.0f, 5.0)<<std::endl;
    std::cout<<funcion(multiplicaid, 5, 5L)<<std::endl;
    std::cout<<multiplicaid(5, 5L)<<std::endl;
    return 0;
}
