#include <iostream>
using namespace std;
//#include <cstring>
#include <string>
#include <algorithm>

int main(){
	string str;
	getline(cin,str);
	//str = "this is me";
	
	// using in-build function 
	reverse(str.begin(),str.end());
	cout<<str; 
}
