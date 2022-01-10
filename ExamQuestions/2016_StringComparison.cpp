

#include<iostream>
using namespace std;
class String{
	public:
		string a,b,d;
		String(string x)
		{
			a=x;
//			b=y;
			
		}
		
		String()
		{
			
		}
		
		String operator +(String c)
		{
			String s3;
			s3.a=a+c.a;
			return s3;
		
			
		}
};

int main(){
	String s1("Binaya");
	String s2("BIn");
	String s3;
	s3=s1+s2;
cout<<"Concatination of S1 object strings and S2 string are "<<s3.a;


	return 0;
}
