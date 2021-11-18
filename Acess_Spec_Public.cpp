#include<iostream>
using namespace std;

class Acess_Spec_Public{ // Naming Class
							public:  // Acess Specifier:Making pblic so it can be accessible even outside this class
							int b=10; // Declaring and assigning variable.
	
};

int main(){
			Acess_Spec_Public d; //Making object for the class Acess_Spec_Public
			cout<<d.b;
			return 0;
}
