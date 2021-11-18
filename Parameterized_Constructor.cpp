// Parametarized Constructor

#include<iostream>
using namespace std;

class SI{
	public:
		int p,t,r;
		SI(int p,int t,int r){
			
			int si=(p*t*r)/100;
		}
		void display(){
			int si;
			cout<<" Param Int is"<<si;
		}
};

int main(){
	SI s(10000,2,1);
	s.display();
	return 0;
	
}
