#include<iostream>
using namespace std;

class overload{
	private:
		int a,b;
	public:
		void getdata(int a){
			this->a=a;
//			this->b=b;
			
		}
		
//		void showdata(){
//			cout<<a;
//		}
	 
	 bool operator==(overload f){
	 	
	 	 if(a==f.a){
			return 1;
		  }
		  else{
		  	return 0;
		  }
	 	

	 }


};

int main(){
	overload l1;
	overload l2;
	overload l3;
	l1.getdata(10);
	l2.getdata(10);
	if(l1==l2){
		cout<<"Both are equal";
	}
	else{
		cout<<" Unequal";
	}

	return 0;
	
	
}
