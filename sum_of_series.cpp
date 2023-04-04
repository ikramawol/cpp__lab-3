// A program that prints the sum of a series  starting from 1/3 to 97/99
#include<iostream>
using namespace  std;
int main()
{
 int num = 1;
 float sum = 0;
 cout<<"\nSeries = {";
 for(; num <= 97; ++num){
     if(num % 2 != 0)
     {
         float deno = num + 2;
         float item = (num/(deno));
         sum += item;
         if(num  < 97)
             cout<<num<<"/"<<deno<<", ";
         else
             cout<<num<<"/"<<deno<<"";
     }
     else
         continue;
 }
 cout<<"}";
 cout<<"\n\nThe Sum of the series is "<<sum<<endl;
 return 0;
}
