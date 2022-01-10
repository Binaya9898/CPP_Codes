//Wap to declare a class Customer which reads and display customer information like as
//Cid,Cname,Caddress,Cphone. TO input and display 50 customers information by using pointer 
//an object array.

#include<iostream>
using namespace std;

class Customer{
	public:
		int Cid,Cphone;
		string Cname,Caddress;
		void getData(){
			cout<<"ENter Id"<<endl;
			cin>>Cid;
			cout<<"Enter Name"<<endl;
			cin>>Cname;
		}
		
		void showData(){
			cout<<Cname<<endl;
			cout<<Cid<<endl<<endl;

	
		}	
	
};

int main(){
	
	Customer *ptr;
	Customer C1[51];
	ptr=&C1[0];
	
	for(int i=0;i<50;i++){
		
	ptr->getData();
	ptr->showData();
	*ptr++;
	
		
	}
	
	
	
	
}
