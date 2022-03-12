// basic to class
#include<iostream>
using namespace std;

class time{
	public:
		int hr,min;
		time(int duration){
			hr=duration/60;
			min=duration%60;
			
			cout<<"Hour is "<<hr<<" and min  is "<<min;
		}
};

int main(){
	int duration;
	cout<<"Enter duration:";
	cin>>duration;
	time t1=duration;
}
