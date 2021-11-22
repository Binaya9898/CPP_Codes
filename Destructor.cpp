#include<iostream>
using namespace std;

class Destruct{ //Creating class name destructor
			int a=20;
			public:
				Destruct(){ //making non parameterized constructor
					cout<<"Constructor is called"<<" "<<a<<endl; //Statement that gives the value of a
					
				}
				
				~Destruct(){ //It is destructor ...as it is defined with the tilde(~) sign before name;
							// It has no return type
							//It doesnot take any parameter.
					cout<<"Destructor is called"; //Basically there is no point of defining destructor
												// as it's function is to free the space after the completion of 
												//constructor block...WE JUST WANT TO SEE IF IT IS RUNNING
				}
	
};
int main(){
	Destruct Dis; //making object of a class named Destruct.
	return 0;
}
