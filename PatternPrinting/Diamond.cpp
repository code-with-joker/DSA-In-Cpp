#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number : ";
    cin>>rows;
    // upper part of diamond
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=rows-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    // lower part of diamond
    for(int i=rows-1; i>=1; i--){
        for(int j=1; j<=rows-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
}