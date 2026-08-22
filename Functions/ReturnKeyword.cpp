// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    cout<<"The value of n is : "<<n<<endl;
    if(n>20){
        return;
    }
    cout<<"The value of n*n is : "<<n*n<<endl;
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    fun(num);

    
}