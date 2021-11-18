#include<iostream>
using namespace std;

class Acess_Spec_Prot{ //Making a class 
	protected:  //Using protected specifier so that only child class can acess it.
		int a=20; // Assigning value to the variable.
		};
		
class child_class:public Acess_Spec_Prot{ // Making child class of a class Acess_Spec_Prot
	public: // Making its property public so that it can be acessible outside of the class
		int geta(){ // Making a int function that can acess the property of base class
			return a; // Returning the value of a 
		}
};

int main(){
	Acess_Spec_Prot b; // Making object of the class Acess_Spec_Prot
	child_class k; // Making object of the base/derived class
	cout<<k.geta(); // printing the function geta that returns the value of a
	return 0;
}
