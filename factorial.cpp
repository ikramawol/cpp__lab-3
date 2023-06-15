// A program that computes the factorial of an integer
#include<iostream>
using namespace std;
int factorial(unsigned int num){
    if(num == 0 || num == 1)
        return 1;
    else
        return factorial(num - 1)* num;
}
int main(){
    int num;
    cout<<"Enter a positive integer number: ";
    cin>>num;
    cout<<"The factorial of "<<num<<" is "<< factorial(num);
    return 0;
}