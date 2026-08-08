#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    long long fact=1; // Use long long to handle larger factorials
    while(num!=0)
    {
        fact*=num; // Multiply the factorial by the current number
        num--; // Decrement the number
    }
    cout<<"Factorial: "<<fact<<endl;
    return 0;
}