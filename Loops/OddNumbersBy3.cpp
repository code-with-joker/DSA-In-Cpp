#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Numbers from 1 to "<<n<<" that are divisible by 3 are: "<<endl;
    for(int i=1; i<=n; i++){
        if(i%2==1 && i%3==0){
            cout<<i<<endl;
        }
    }
}