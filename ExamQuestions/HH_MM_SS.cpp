#include<iostream>
using namespace std;

class time{
	public:
		int hh,mm,ss;
		void getTime(){
			cout<<"Enter hour"<<endl;
			cin>>hh;
			cout<<"Enter minute"<<endl;
			cin>>mm;
			cout<<"Enter seconds"<<endl;
			cin>>ss;
			
		}
		
		void addTime(time t1,time t2){
			time t3;
			t3.hh=t1.hh+t2.hh;
			t3.mm=t1.mm+t2.mm;
			t3.ss=t1.ss+t2.ss;
			
			cout<<t3.hh<<" : "<<t3.mm<<" : "<<t3.ss<<endl;
			
			
		}
			
};

int main(){
	time t1;
	time t2;
	time t3;
	t1.getTime();
	t2.getTime();
	t3.addTime(t1,t2);
	return 0;
	
}
