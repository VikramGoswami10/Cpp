// Operator overloading

#include <iostream>
using namespace std;

class complex
{
	int real ; 
	int img;
	
	public : 
	complex()
	{
		real = 0 ;
		img = 0 ; 
	}
	complex(int a , int b)
	{
		real = a; 
		img = b ; 
	}
	void display()
	{
		if(img>0)
		{
			cout << real<< "+"<<img<<"i"<<endl;	
		}
		else
		{
			cout <<real<<img<<"i"<<endl;
		}
		
	}
	
	//  + opertor overload 
	complex operator+(complex& obj)
	{
		cout<<"+ operator is called"<<endl;
		complex temp ; 
		temp.real = this->real + obj.real;
		temp.img = this->img + obj.img;
		return temp;
	};
	
	// - opertor overload 
	complex operator-(complex& obj)
	{
		cout<<"- operator is called"<<endl;
		complex temp ; 
		temp.real = this->real - obj.real;
		temp.img = this->img - obj.img;
		return temp;
	};
	
	// ++ pre increament opertor overload
	complex operator++()
	{
		cout<<"increament operator is called"<<endl;
		++this->real;
		++this->img;
		return(*this);
	}
	
	// ++ post increament opertor overload
	complex operator++(int)
	{
		cout<<"Post increment overloading operator is called "<<endl;
		complex temp = *this ; 
		++this->real;
		++this->img;
		return temp;
	}
	
	
	// -- pre decrement opertor overload
	complex operator--()
	{
		cout<<"decrement operator is called"<<endl;
		--this->real;
		--this->img;
		return(*this);
	}
	
	// -- post decrement opertor overload
	complex operator--(int)
	{
		cout<<"Post decrement overloading operator is called "<<endl;
		complex temp = *this ; 
		--this->real;
		--this->img;
		return temp;
	}
	
};

int main()
{
	complex c1(1,2); // c1 = 1 + 2i
	complex c2(3,4); // c2 = 3 + 4i
	
	complex c3 = c1+ c2; //  c3 = 4 + 6i
	c3.display(); 
	
	complex c4 =c3-c1 ; // c4 = 3 + 4i
	c4.display();
	
	complex c5 = ++c4;  // c5 = 4 + 5i
	c5.display();
	
	complex c6 = --c5; // c6 = 3 + 4i ; 4 + 5i
	c6.display();
	
	complex c7 = c6++; // c7 = 3 + 4i 
	c7.display();	
	
}
