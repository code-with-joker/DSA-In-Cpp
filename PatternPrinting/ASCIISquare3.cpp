#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number : ";
    cin>>rows;
    
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=rows; j++){
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}