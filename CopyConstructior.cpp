#include<iostream>
using namespace std;
 class Copy{
 		int p, s;
 	public:
 	Copy(int price,int size){
 		p=price;
 		s=size;
	 }
	 
	 Copy(Copy &c){
	 	p=c.p;
	 	s=c.s;
	 }
	 
	 void show(){
	 	cout<<"The size of a copy is"<<s<<endl;
	 	cout<<"The price of a copy is"<<p<<endl;
	 }
	 
	 
 };
 
 int main(){
 	Copy c(80,8);
 	c.show();
 	Copy b(c);
 	b.show();
 }
