#include<iostream>
using namespace std;
float Intersect(float m1, float b1, float m2, float b2){
    //checking if the lines intersect
    if(m1 != m2)
        return 1;
    else
        return 0;
}
int main(){
    float m1, m2, b1, b2;
    cout<<"Enter the slope of the first line: ";
    cin>>m1;
    cout<<"Enter the y-intercept of the first line: ";
    cin>>b1;
    cout<<"Enter the slope of the  second line: ";
    cin>>m2;
    cout<<"Enter the y-intercept of the second line: ";
    cin>>b2;
    cout<<"The first line  is y = " << m1 << "x + "<< b1<<endl;
    cout<<"The second line is y = " << m2 << "x + "<< b2<<endl;
    cout<<Intersect(m1,b1,m2,b2);
    
    return 0;
}