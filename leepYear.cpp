#include<iostream>
using namespace std;
int leepYear(int year){
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        return true;
    }
    else
        return false;
}
int main()
{
    int year = 2001;
 
    for(;year <= 2100; year++){
          for(int i = 1; i <= 10; i++){
           //   int counter = 0;
              //if(counter )
             if(leepYear(year)== true){
                cout<<year<<" ";
            }
        }
       cout<<endl;
    }
    return 0;
}
