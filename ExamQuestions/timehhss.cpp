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
			if(t3.ss>59 || t3.mm>59){
				if(t3.ss>59){
				
				int p=t3.ss/60;
				int pp=t3.ss%60;
				t3.ss=pp;
				t3.mm=t3.mm+p;
			}
			if(t3.mm>59){
				int p1=t3.mm/60;
				int pp1=t3.mm%60;
				t3.mm=pp1;
				t3.hh=t3.hh+p1;
				
			
			}
			
			}
			
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
