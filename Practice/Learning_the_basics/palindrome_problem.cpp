// Palindrome problem 
// A palindrome is a word, sentence, verse, or even number that reads the same backward or forward.

#include <iostream>
using namespace std; 
#include <cstring>
bool stringPalindrome(char);
int main(){
	int n , originalNumber, reverseNumber ;
	cin>>n;
	originalNumber = n ;
	cout<<"ORIGINAL NUMBER IS : "<<originalNumber<<endl;
	while(n>0){
		int rem = n%10;
		n=n/10;
		reverseNumber = (reverseNumber*10) + (rem);
	}
	
	cout<<"REVERSE NUMBER IS : "<<reverseNumber<<endl;
	
	if(originalNumber==reverseNumber){
		cout<<"PALINDROME"<<endl;
	}
	else{
		cout<<"NOT PALINDROME"<<endl;
	}	
	////////////////////////////////////////////////
	
	char ch[100] ; 
	cin>>ch;
	
	if(stringPalindrome(ch))
	cout<<"palindrome";
	cout<<"Not Palindrome";
	}
	
}

bool stringPalindrome(char ch[100]){
		int length = strlen(ch);
		for(int i = 0 ; i<length ; i++){
			if(ch[i] != ch[length-1-i]){
				return false;
			}
			else {
				return true;
			}
		}
}
