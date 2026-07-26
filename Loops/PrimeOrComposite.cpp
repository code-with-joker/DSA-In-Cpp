#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // int factors = 0;
    
    // cout<<"Factors of "<<n<<" are: ";
    // for(int i=1; i<=n; i++){
    //     if(n%i==0){
    //         factors++;
    //         // cout<<i<<" ";
    //     }
    // }
    // cout<<factors;
    // if(factors==1){
    //     cout<<"\n"<<n<<" is neither prime nor composite";
    // }
    // else if(factors==2){
    //     cout<<"\n"<<n<<" is a prime number";
    // }
    // else{
    //     cout<<"\n"<<n<<" is a composite number";
    // }

    bool flag = false;  //false means prime, true means composite
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            flag = true;
            break;
        }
    }
    if (n==1){
        cout<<"\n"<<n<<" is neither prime nor composite";
    }
    else if(flag==false){
        cout<<"\n"<<n<<" is a prime number";
    }
    else{
        cout<<"\n"<<n<<" is a composite number";
    }
}