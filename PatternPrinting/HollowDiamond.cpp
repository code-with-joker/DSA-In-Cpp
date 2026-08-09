#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter the number : ";
    cin >> rows;

    // 1. Upper Part of Hollow Diamond
    for(int i = 1; i <= rows; i++){
        // Leading Spaces
        for(int j = 1; j <= rows - i; j++){
            cout << "  ";
        }
        
        // Stars & Inner Spaces (Boundary Logic)
        for(int j = 1; j <= 2*i - 1; j++){
            if(j == 1 || j == 2*i - 1) {
                cout << "* "; // Pehla aur aakhri star
            } else {
                cout << "  "; // Beech me khali space
            }
        }
        cout << endl;
    }

    // 2. Lower Part of Hollow Diamond
    for(int i = rows - 1; i >= 1; i--){
        // Leading Spaces
        for(int j = 1; j <= rows - i; j++){
            cout << "  ";
        }
        
        // Stars & Inner Spaces (Boundary Logic)
        for(int j = 1; j <= 2*i - 1; j++){
            if(j == 1 || j == 2*i - 1) {
                cout << "* "; // Pehla aur aakhri star
            } else {
                cout << "  "; // Beech me khali space
            }
        }
        cout << endl;
    }

    return 0;
}