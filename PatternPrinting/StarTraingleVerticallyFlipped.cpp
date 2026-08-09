#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number : ";
    cin>>rows;
    
    // for(int i=1; i<=rows; i++){
    //     for(int j=1; j<=rows; j++){
    //         if ((i+j) > rows) cout<<"* ";
    //         else cout<<"  ";
    //     }
    //     cout<<endl;
    // }

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=rows-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}