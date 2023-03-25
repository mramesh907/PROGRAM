#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to check even or odd:";
    cin>>n;
    if(n%2==0)
    {
        cout<<endl<<n<<" Is a even number";
    }
    else 
    {
        cout<<endl<<n<<" Is a odd number";

    }
    return 0;
}