//Mark of students
#include <iostream>
using namespace std;
    void insert(int n){	
    int counts(0);	
    int mark(0);	
    for(int i=1;i<n;i++)	
    {		
        cout<<"enter the mark of student:"<<i<<"student:";		
        cin>>mark;		
        if(mark>20&&mark<=30)		
        counts++;	
     }	
    cout<<"the number of students who have scored greater than 20 in an exam out of 30:";	
    cout<<counts;
        }
int main(){	
    int n;	
    cout<<"enter the number of students:";	cin>>n;	
    insert(n);	
return 0;
}