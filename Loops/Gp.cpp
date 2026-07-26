#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;

    int a, r;

    cout<<"Enter first term: ";
    cin>>a;

    cout<<"Enter common ratio: ";
    cin>>r;

    // 2 5 8 11 14 17 20 23 26 29..........

    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a *= r;
    }
}