#include<iostream>
using namespace std;

class Employee{ 
public:
	string name,address,idnum;	
};

class Manager:public Employee{
	
	public:
		int salary;
		string title;
		void GetData(){
						cout<<"Enter name,idnum,address,salary,title of manager"<<endl;
						cin>>name>>idnum>>address>>salary>>title;	
						}
						
						
		void PutData(){
		cout<<"Name of Manager is:";
		cout<<name<<endl;
	
		cout<<"IDNum is:";
		cout<<idnum<<endl;
	
		cout<<"Address is:";
		cout<<address<<endl;
		
		cout<<"Salary is:";
		cout<<salary<<endl;
		
		cout<<"Title is:";
		cout<<title<<endl;
		


		 }	
		
};


class Author:public Employee{
	public:
		int price;
		string book_name;
		void GetData(){
						cout<<"Enter name,idnum,address,book_name,price"<<endl;
						cin>>name>>idnum>>address>>book_name>>price;	
						}
						
						
		void PutData(){
		cout<<"Name of Author is:";
		cout<<name<<endl;
	
		cout<<"IDNum is:";
		cout<<idnum<<endl;
	
		cout<<"Address is:";
		cout<<address<<endl;
		
		cout<<"Book Name is:";
		cout<<book_name<<endl;
		
		cout<<"Price is:";
		cout<<price<<endl;
		


		 }	
		
	
	
	
	
};

int main(){
	Employee emp;
	Manager mng;
	Author ath;
	
	mng.GetData();
	cout<<endl;
	mng.PutData();
	cout<<endl;
	cout<<endl;
	ath.GetData();
	cout<<endl;
	ath.PutData();
	return 0;
	
	
}


