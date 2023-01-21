#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int t1=0,t2=1,n,nextterm=0;
    cout<<"Enter the postitive number"<<endl;
    cin>>n;
    cout<<"Fibonacci series \n"<<t1<<","<<t2<<",";

    nextterm=t1+t2;
    while (nextterm<=n)
    {
        cout<<nextterm<<",";
        t1=t2;
        t2=nextterm;
        nextterm= t1 + t2;
        
    }
    

    
}