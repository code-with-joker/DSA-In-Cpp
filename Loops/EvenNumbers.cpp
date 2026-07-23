#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Even numbers from 1 to "<<n<<" are: "<<endl;
    // for(int i=1; i<=n; i++){
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }
    // }

    for(int i=2; i<=n; i+=2){
        cout<<i<<endl;
    }
}