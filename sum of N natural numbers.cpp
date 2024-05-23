#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter limit: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"sum= "<<sum;
    return 0;
}
