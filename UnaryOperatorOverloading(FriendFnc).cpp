#include<iostream>
using namespace std;
 
 class opoverload{
 	int a=12,b=23;
 	public:
 		void display(){ //Function to display
 			cout<<"Value of a is"<<a<<endl;
 			cout<<"value of b is"<<b<<endl<<endl;
		 }
		  friend void operator-(opoverload &op); //Declaring frnf fnc and passing address.
		};
		 void operator- (opoverload &op){ //Operator overloading function;
		 	op.a=-op.a;
		 	op.b=-op.b;
		 }
 
 int main(){
 	opoverload op;
 	op.display(); //Displaying before overloading
 	-op; //Overloading operator (-) in op object.
 	op.display(); // Displaying after overloading.
 	return 0;
 }
