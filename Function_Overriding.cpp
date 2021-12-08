/*When a member function of a base class is redefined in its derived class
 with the same parameters and return type, it is called function overriding.
 */ 

#include<iostream>
using namespace std;

class cls_1{
	int a=20;
	public:
	 int getA(){
	 	return a;
	 }
};

class cls_2{
	int a=30;
	public:
		int getA(){
			return a;
		}
};

class cls_12:public cls_1,public cls_2{
	public:
	//	cls_12()
	void show()
	{
			int p,q;
			p=cls_1::getA();
			q=cls_2::getA();
			cout<<"The sum is "<<" "<<p+q;
		}
	
	
	
};

int main(){
	cls_12 C1;
	C1.show();
	return 0;
}
/*Here in this function getA() is overriding.This function returns the value of int a.
To access the member or member function we use scope resolution operator as shown in
line 30 and 31.*/

