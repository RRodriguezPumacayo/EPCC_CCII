#include<iostream>

using namespace std;

int conversion(double cel){
    double fa;
    fa = cel * 9/5 + 32;
    cout<<cel<<"C = "<<fa<<"F";
}

int main(){
    double celsius;
    cout<<"Enter a temperature in Celsius: ";cin>>celsius;
    conversion(celsius);
}
