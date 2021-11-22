#include<iostream>
using namespace std;

class iLine{
	
	int a,b;
	public:
		inline int sum( int at,int bt){ //This is inline function inside the class
			a=at;
			b=bt;
			return a+b;
		}
		
		void difference();		//This is a member function of a class
	
};

inline void iLine::difference(){ // This is member function of the class which is inline function
	cout <<a-b;					 // It can be used in any kind of functions
}



int main(){
	iLine obj; //Object of the class
	cout<<obj.sum(20,30)<<endl; //Calling the inline function inside the class.
	obj.difference (); // Calling inline member function of the class.
	return 0;
}
