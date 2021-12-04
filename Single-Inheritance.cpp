#include<iostream>
using namespace std;

class base{
	protected:
		int a=20;
	
	
};

class derived:public base{
	public:
		int b=a;
};

int main(){
	base b;
	derived d;
	cout<<d.b;
	return 0;
}
