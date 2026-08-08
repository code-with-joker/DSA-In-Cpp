#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number : ";
    cin>>rows;
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            cout<<(2*j) -1 <<" ";
        }
        cout<<endl;
    }
}