// Print all Divisors of a given Number
#include <iostream>
using namespace std ; 

void printDivisor(int n) {
    int divisor[n]; // Array to store the divisors
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisor[count++] = i;
        }
    }

    cout << "Divisors of " << n << " are: ";
    for (int i = 0; i < count; i++) {
        cout << divisor[i] << " ";
    }
    cout << endl;
}


int main(){
	int n; 
	cout<<"Enter Number to find its Divisors "<<endl;
	cin>>n;
	printDivisor(n);

}
