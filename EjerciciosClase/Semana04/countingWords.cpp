/*
• Your task is to write a program that reads words and counts the frequency of each unique word.
• A word is a string of non space characters separated by white space
*/

#include<cerrno>
#include<algorithm>
#include<string>
#include<iostream>
#include<iterator>
#include<fstream>

int main(){
    std::string name{"data.in"};
    std::ifstream in{name};
    if(not in)
        std::cerr<<name<<": "<<std::generic_category().message(errno)<<'\n';
}
