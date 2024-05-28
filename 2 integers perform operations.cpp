#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,sub,mul,quo;
    cout<<"enter num1: ";
    cin>>a;
    cout<<"enter num2: ";
    cin>>b;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    quo=a/b;
    cout<<"sum="<<sum<<"\n difference="<<sub<<"\n product="<<mul<<"\n quotient="<<quo;
    return 0;
}
