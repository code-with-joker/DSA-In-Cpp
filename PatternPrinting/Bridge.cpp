#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number : ";
    cin>>rows;
    for(int i=1; i<=2*rows -1; i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
    for(int i=rows-1; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
        for(int j=1; j<=2*(rows-i)-1; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    

}