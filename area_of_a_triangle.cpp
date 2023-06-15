//A program that computes the area of a triangle
#include<iostream>
using namespace std;
float triangle(float h, float w){
     return (h*w)/2;
    }
int main()
{
	float h, w;
	cout<< "Enter the height of the triangle : ";
	cin>> h;
	cout<<"Enter the width of the triangle : ";
	cin>> w;
	cout<< "The area of the triangle is "<< triangle(h, w);
	return 0;
	}