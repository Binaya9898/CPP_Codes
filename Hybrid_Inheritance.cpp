#include<iostream>
using namespace std;

class Boys{ 
public:
 int nB=20;	
	
};
class school{
	public:
		int nS=30; //number of staff
		int noT=10; //number of teacher
};

class total_staff:public school{
	public:
		int ts=nS+noT; // total number of staff...here it is multilevel inherit
};
class Girls{ 
	public:
		int nG=30;
	
	
};

class info:public Boys,public Girls,public total_staff {  //this multiple inherit
	public :
	int tn=nB+nG;
	int tp=tn+ts;
	

};

int main(){
	Boys b;
	Girls G;
	info s;
	cout<<"Total No. Of students is"<<s.tn<<endl;
	cout<<"Total No. Of Counting is is"<<s.tp<<endl;
	
	return 0;
}


