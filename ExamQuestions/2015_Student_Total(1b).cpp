#include<iostream>
using namespace std;

class student{
	public:
		int registration_number,marks[6],total=0;
		float percentage;
		
		void readdata(){
			cout<<"Enter registration_number "<<endl;
			cin>>registration_number;
			for(int i=1;i<=5;i++){
				cout<<"Enter marks of "<<i<<" subject:"<<endl;
				cin>>marks[i];
//				
				
			}
			
			
		}
		
		void calculate(){

			for (int i=1;i<=5;i++){				
				total=total+marks[i];
			
				
				
			}
		
			percentage=total/5;
		}
		
		void show(){
			cout<<"Total marks is: "<<total<<endl;
			cout<<"Percentage is: "<<percentage<<"%";
			
		}
};

int main(){
	student s1;
	s1.readdata();
	s1.calculate();
	s1.show();
	return 0;
}
