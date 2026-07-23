#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;

    // 2 5 8 11 14 17 20 23 26 29..........

    for(int i=0; i<n; i++){
        cout<<2+(i*3)<<" ";
    }
}