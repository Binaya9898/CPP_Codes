#include<iostream>
using namespace std;

class second; // Forward declaration

class first{
	int a=10;
	friend int sum(first,second);
	
};

class second{
	int b=20;
	friend int sum(first,second);
	
};

int sum(first f,second s){
	
	return f.a +s.b;
}

int main(){
	first f;
	second s;
	cout<<sum(f,s);
	
}

