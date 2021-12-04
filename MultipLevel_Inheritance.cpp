/* Whenever we inherit the members of the class i.e from parent class to child class 
or we can say from base class to derived class then that is said to be inheritance or
single level inheritance. 

Similarly if we inherit the members of Parent-to-Child-to-GrandChild then this is known as 
multi level inheritance.*/

#include<iostream>
using namespace std;

class base{ //This is base class.
	protected:
		int a=20;
	
	
};

class derived:protected base{ //This is child class of base class.
	protected:
		int b=a;
};

class sub_derived:public derived{ // This is child class of derived class and
								  // grandchild of base class.
	public:
		int c=b;
};

int main(){
	base b;
	derived d;
	sub_derived sd;
	cout<<sd.c; // We call the member c by using the its obj.
	return 0;
}

/* Here in this program the property of base class is access by derived class and the property of 
derived class is acessed by sub_derived class.*/
