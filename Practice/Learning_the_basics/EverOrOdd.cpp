#include<iostream>
using namespace std;

int main() {
    int a;

    while (true) {
        cout<<"Enter a number to check (enter 0 to exit): "<< endl;
        cin>>a;

        // Exit the loop if the user enters 0
        if(a==0){
            cout<<"Exiting the program."<<endl;
            break;
        }

        // Check if the number is odd or even
        if (a % 2 == 0) {
            cout << "Entered number is even" << endl;
        } else {
            cout << "Entered number is odd" << endl;
        }
    }

    return 0;
}

