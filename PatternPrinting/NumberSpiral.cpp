#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number : ";
    cin>>rows;
    // //Method 1 
    // for(int i=1; i<=rows; i++){
    //     for(int j=1; j<=rows; j++){
    //         if((i<=j)) cout<<i<<"  ";
    //         else cout<<j<<"  ";
    //     }
    //     for(int j=rows-1; j>=1; j--){
    //         if((i<=j)) cout<<i<<"  ";
    //         else cout<<j<<"  ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=rows-1; i>=1; i--){
    //     for(int j=1; j<=rows; j++){
    //         if((i<=j)) cout<<i<<"  ";
    //         else cout<<j<<"  ";
    //     }
    //     for(int j=rows-1; j>=1; j--){
    //         if((i<=j)) cout<<i<<"  ";
    //         else cout<<j<<"  ";
    //     }
    //     cout<<endl;
    // }
    
    // Method 2
    for(int i=1; i<=2*rows-1; i++){
        for(int j=1; j<=2*rows-1; j++){
            int a =i, b = j;
            if(i>rows) a = 2*rows-i;
            if(j>rows) b = 2*rows-j;
            cout<<min(a,b)<<"  ";
        }
        cout<<endl;
    }
}