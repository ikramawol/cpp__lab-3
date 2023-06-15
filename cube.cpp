//A program tgat Calculates the cube of a number entered by the user
#include<iostream>
using namespace std;
//creating a function named cube()
int cube(int num){
    return num * num * num;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The cube of "<<num<<" is  "<<cube(num);
    return 0;
}