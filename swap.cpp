#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<endl<<"Enter 2nd number:";
    cin>>b;
    c=a+b;
    b=c-b;
    a=c-b;
    cout<<endl<<"After swap 1st number="<<a;
    cout<<endl<<"After swap 2nd number="<<b;
    return 0;
}