#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;

    // 2 5 8 11 14 17 20 23 26 29..........

    int a= 1, r=2;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a *= r;
    }
}