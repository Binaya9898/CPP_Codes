#include<iostream>
using namespace std;

class complex{
	public:
		int real,imag;
		void getdata(int real,int imag){
			this->real=real;
			this->imag=imag;

			
		}


			complex operator+ (complex d){
			complex c3;
			c3.real=real+d.real;
			c3.imag=imag+d.imag;
			return c3;
		}
		
		complex operator * (complex d){
			complex c4;
			c4.real=real*d.real;
			c4.imag=imag*d.imag;
			return c4;
		}
		
		
		
		
};

int main(){
	complex c1;
	complex c2;
	complex c4;
	complex c3;
	c1.getdata(2,3);
	c2.getdata(4,5);
	c3=c1+c2;
	c4=c1*c2;
	cout<<"The sum of entered complex number is "<<c3.real<<"+"<<c3.imag<<"i"<<endl;
	cout<<"The product of entered complex number is "<<c4.real<<"+"<<c4.imag<<"i"<<endl;


}


