#include<iostream>
using namespace std;

class String{
	public:
		string s1,s2,s3;
		String(string s1,string s2){
		s3=s1+s2;
		cout<<"Concat result is:"<<s3<<endl;
	}
	
	
};

int main(){
	String s1("Hello","World");
	String s2("hello","world");
	String s3("HELLO","WORLD");
	return 0;
}

