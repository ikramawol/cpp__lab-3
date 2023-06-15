//This program computes the area of a rectangle
#include<iostream>
using namespace std;
float rectangle(float h, float w){
    return h * w;
}
int main()
{
	float h, w;
	cout<<"Enter the height of the rectangle : ";
	cin>>h;
	cout<<"Enter the width of the rectangle : ";
	cin>>w;
	cout<< "The area of the rectangle is "<<rectangle(h,w);
	return 0;
}