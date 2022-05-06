/*
• The goal of this exercise is to program a Guess My Number game. When it’s finished, it should work like this:

I'm thinking of a number between 1 and 100 (including both). Can you guess what it is?
Type a number: 45
Your guess is: 45
The number I was thinking of is: 14
You were off by: 31

• To choose a random number, use the random library of C++
<random> https://en.cppreference.com/w/cpp/numeric/random
*/

#include<iostream>
#include<random>

int main() {
    std::uniform_int_distribution<int> u(1,100); // distribuido uniformemente de 1 a 100
    std::default_random_engine e;// genera enteros aleatorios sin signo
    std::cout<<"I'm thinking of a number between 1 and 100 (including both). Can you guess what it is?\n";
    int num,off;
    do{
        std::cout<<"Type a number: ";std::cin>>num;
        std::cout<<"Your guess is: "<<num<<"\n";
        off=u(e);
        std::cout<<"The number I was thinking of is: "<<off<<"\n";
        std::cout<<"You were off by: "<<off-num<<"\n";
    }
    while(num!=u(e));
}
