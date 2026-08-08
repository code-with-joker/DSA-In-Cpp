#include<iostream>
using namespace std;

int main()
{
    int base, exponent;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the exponent: ";
    cin>>exponent;
    long long result=1; // Use long long to handle larger results
    for(int i=1; i<=exponent; i++)
    {
        result*=base; // Multiply the result by the base for each iteration
        if(base==1) break;
    }   

    if(base==0 && exponent==0) 
    {
        cout<<"Result is undefined for 0^0"<<endl;
    }
    else cout<<"Result: "<<result<<endl;
}