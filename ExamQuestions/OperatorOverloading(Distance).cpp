#include<iostream>
using namespace std;

class Distance{
	public:
		int dist;
	void getDis(int dist){
		
		this->dist=dist;
	}
	
	Distance operator <(Distance f){
		Distance d3;
		if(dist<f.dist){
			d3.dist=0;
		}
		else{
			d3.dist=1;
		}
		return d3;
	}
	
};

int main(){
	Distance d1;
	Distance d2;
	Distance d3;
	d1.getDis(29);
	d2.getDis(28);
	d3=d1<d2;
//	cout<< d3.dist;
	if(d3.dist==0){
		cout<<"d1 is small";
	}
	else{
		cout<<"d2 is small";

	}
	return 0;
}
