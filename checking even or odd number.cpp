#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    if(n%2==0)
    {
        cout<<n<<"is even number";
        cout<<"\n";
    }
    else
    {
        cout<<n<<"is odd number";
    }
    return 0;
}
