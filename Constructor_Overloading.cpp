// Constructor Overloading

#include<iostream>
using namespace std;

class SI{
	public:
		int p,t,r;
		SI(int p,int t,int r){
			
			cout<<(p*t*r)/100<<endl;
		}
			SI(){
			p=5000;
			t=2;
			r=1;
			cout<<(p*t*r)/100;
		}
		
		
};

int main(){
	SI s(10000,2,1);
	
	SI ss;
	return 0;
}
