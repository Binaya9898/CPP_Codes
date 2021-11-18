#include<iostream>
using namespace std;

class SI{
	public:
		int p,t,r,z;
		
		SI(int p,int t,int r){
			cout<<"param consr"<<endl;
		 z=(p*t*r)/100;
		}
		
		
		SI(SI &k){
			cout<<"Cpy Const"<<endl;
			int x=k.p;
			int y=k.t;
			int v=k.r;
			
			 int z=(v*x*y)/100;
			
		}
		
		void show(){
			
			cout<<"Interest is "<<z<<endl;
		}
		
		
};

int main(){
	SI cs(10000,2,1);
	cs.show();
	SI sa(cs);
	sa.show();
	return 0;
	
}
