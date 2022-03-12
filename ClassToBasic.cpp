#include<iostream>
using namespace std;

class time{
	public:
		int hr,min;
		int duration;
		time(int hr,int min){
			this->hr=hr;
			this->min=min;
		}
		operator int(){
			return (hr*60+min);
		}
};

int main(){
	int hr,min;
	cout<<"Enter  hour and min respectively";
	cin>>hr>>min;
	time t1(hr,min);
	int duration=t1;
	cout<<"Duration is "<<duration;
}
