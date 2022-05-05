/*
• Your task is to write a program that reads words and counts the frequency of each unique word.
• A word is a string of non space characters separated by white space
*/

/*
Con la libreria map podemos crear arrays asociativos, estos tienen elementos que van asociados por una clave
a diferencia de un array tradicional donde cada valor es indexado numericamente.
*/
#include<iostream>
#include<map>
#include<string>
#include<fstream>

int main(){
    //std::ifstream archivo; //Para la tectura de un archivo
    //archivo.open("tarea.txt",std::ios::out); //Para la tectura de un archivo

    std::map<std::string, int> counts{};//CLAVE(key) string, valor int; the name of the array is counts
    std::string word{};
    int i=0;
    std::cout<<"Input 5 times the same word\n";
    while(std::cin>>word){
        ++counts[word];
        std::cout<<"La palabra "<<word<<" se repite "<<counts[word]<<" veces\n";
        if(counts[word]==5){
            break;
        }
    }
    //TODO: Imprimir el resultado
    //Para imprimir los valores usamos "iterator",
    std::map<std::string, int>::iterator rator;//map<key,valor>::iterador name

    for(rator = counts.begin();rator != counts.end();rator++){
        //rator->first nos da la clave(key)
        //rator->second nos da el valor(key)
        std::cout<<"Clave = "<<rator->first<<": Valor = "<<rator->second<<" La palabra ("<<rator->first<<") se repite "<<rator->second<<" veces."<<std::endl;
    }

    /*
    //LEER UN ARCHIVO
    while(!archivo.eof()){
        getline(archivo,word);
        ++counts[word];
        std::cout<<"La palabra "<<word<<" se repite "<<counts[word]<<" veces\n";
    }
    */


    return 0;
}
