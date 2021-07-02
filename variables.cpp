#include<iostream>
using namespace std;

int glo=11;

void sum(){
    int a;
    cout <<"glo is eqaul to\n"<<glo;
}

int main(){
    
    int glo=12;
    int op = 4;
    int b= 2;
    
    cout <<"\nThe Value of a is "<<op<<"\n The Value of b is  "<<b;
    cout<<"\n"<<"Glo is Equal to\n"<<glo<<"\n";
    
    sum();
    return 0;

}
// /n is line breaker
// precedence is given to local variable in C++