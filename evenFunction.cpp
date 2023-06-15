#include<iostream>
using namespace std;
int isEven(int num){
    	if(num % 2 == 0)
	        return true;
	    else
	        return false;
}
int main(){
	int num;
	cout <<" Enter a number: ";
	cin>>num;
	if(isEven(num) == true)
	    cout<<"Even";
	else
	     cout<<"Odd";
	
	return 0;
}