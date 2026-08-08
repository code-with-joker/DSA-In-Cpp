#include<iostream>
using namespace std;

int main()
{
    int num, reverse=0,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    int num1=num; // Store the original number for later use
    if(num==0) reverse=0; // If the number is 0, the reversed number is 0

    while(num!=0)
    {
        reverse = reverse * 10 + num % 10; // Build the reversed number
        num/=10; // Remove the last digit
    }
    sum+=reverse + num1; // Add the reversed number to the sum
    cout<<"Sum of digits: "<<sum<<endl;
    cout<<"Reversed number: "<<reverse<<endl;
    return 0;
}