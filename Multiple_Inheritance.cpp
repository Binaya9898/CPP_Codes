#include<iostream>
using namespace std;

class Boys{ // This is first class
public:
 int nB=20;	
	
};

class Girls{ // This second class
	public:
		int nG=30;
	
	
};

class student:public Boys,public Girls{ //This is a 3rd class derived from both 1st and 2nd.
	public :
	int tn=nB+nG;
	

};
int main(){
	Boys b;
	Girls G;
	student s;
	cout<<"Total No. Of students is"<<s.tn;
	return 0;
}
/* The main concept of multiple inheritance is that the member of a class can be inherited
from two or more differnt classes*/

