#include<iostream>
using namespace std;

int main()
{
    int num, sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    if(num==0) sum=0; // If the number is 0, the sum of digits is 0
    
    while(num!=0)
    {
        sum+=num%10; // Add the last digit to the sum
        num/=10; // Remove the last digit
    }
    cout<<"Sum of digits: "<<sum<<endl;
    return 0;
}