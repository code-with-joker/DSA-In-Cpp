#include<iostream>
using namespace std;

void starTriangle(int num){
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    
    starTriangle(num);
    
}