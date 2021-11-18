#include<iostream>
using namespace std;

class Acess_Spec_Priavte{ // Naming class
	int b=10; // Assigning value to the variable
	public: // Making public so that it can be accessible outside this class.
		int getb(){ // Making a function that returns the int vale
		return b; // returning the value of b which is protected by making a public function.
		}
};

int main(){
	Acess_Spec_Private d; // Making object of a class
	cout<<d.getb();
}
