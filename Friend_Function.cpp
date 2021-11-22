#include<iostream>
using namespace std;

class Frnd{
	int a=20,b=10;
	public:
		friend int sum(Frnd obj);
			
	
};

int sum(Frnd obj){
	cout<<"The sum is"<<" "<<obj.a+obj.b;
	return 0;
}

int main(){
	Frnd obj;
	sum(obj);
	return 0;
}
