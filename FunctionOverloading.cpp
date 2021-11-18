/*
It is a type of function that can have sane function name but can act differently according 
to the function arguments and parameters.
*/

#include<iostream>
using namespace std;

class div{
	public:
		int Mult(int a, int b){  //This function returns the product of integer data
			return a*b;
		}
		
		double Mult(double a, double b){  // This function returns the product of double data.
			return a*b;
		}
	
};

int main(){
	div d;
	
	cout<<d.Mult(20,7)<<endl;
	cout<<d.Mult(14.22,7.11);
	return 0;
}
