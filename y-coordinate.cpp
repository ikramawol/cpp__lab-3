#include<iostream>
using namespace std;
float Line(float m, float b, float x){
    float y = m * x + b;
    return y;
}
int main()
{
	float m, b, x;
	cout<<"Enter the slope m of the line: ";
	cin>> m;
	cout<<"Enter the y-intercept of the line: ";    cin>>b;
	cout<<"Enter the x-coordinate of the line: ";
	cin>>x;
	cout<<"The y-coordinate of the line is "<<Line(m, b, x);
	return 0;
}