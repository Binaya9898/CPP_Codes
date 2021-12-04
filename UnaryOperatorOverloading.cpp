/* Whenever the operator is oveloaded or we can say if operator is acting differently as per its
arguments then that is said to be operator overloading. If operator is operating in single operand
then it is called unary operator.If unary operator acts differently as per the arguments then we
called it as a unary operator overloading.*/

#include<iostream>
using namespace std;

class unaryOverload{
	int a;
	public:
	void getA(int a1){  //This function gets the data
		a=a1;
	}
	void display(){ //This function display the value of a
		cout<<"The value of a is"<<a<<endl;
	}
	void operator -(){ // operator is keyword and this function overloads the (-)operator;
		a=-a; //If the given argument is positive then the result is negative and vice versa;
	}
};

int main(){
	unaryOverload OL; //Making object
	OL.getA(20); //Providing data
	OL.display(); 
	-OL; //Overloading - operator for the members of the class.
	OL.display();
	return 0;
}
