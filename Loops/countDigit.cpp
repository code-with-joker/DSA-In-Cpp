#include<iostream>
using namespace std;

int main()
{
    int num, count=0;
    cout<<"Enter a number: ";
    cin>>num;
    if(num==0)
    {
        count=1; // If the number is 0, it has 1 digit
    }
    while(num!=0)
    {
        num/=10;
        count++;
    }
    cout<<"Number of digits: "<<count<<endl;
    return 0;
}