// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n,r;
    cout<<"Enter the n and r : ";
    cin>>n>>r;

    int result = fact(n)/(fact(r)*fact(n-r));
    cout<<"The combination of "<<n<<" and "<<r<<" is : "<<result<<endl;
}