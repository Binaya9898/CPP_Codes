//Non Parametarized Constructor

#include<iostream>
using namespace std;

class SI{
	public:
		int p,t,r;
		SI(){
			p=5000;
			t=2;
			r=1;
			int si=(p*t*r)/100;
		}
		void display(){
			int si;
			cout<<"Non Param Int is"<<si;
		}
};

int main(){
	SI s;
	s.display();
	return 0;
	
}

