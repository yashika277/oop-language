#include<iostream>
#include<string.h>
using namespace std;
class maths{
		public:
		int sum = 0;
		maths(int a, int b = 0){					
			sum = a + b;
			cout<<"Sum is: "<<sum<<endl;
		}
		maths(){										
			
		}
		
		
	};
	
int main(){
	maths m(40, 20);		
	maths m1(30);			
	maths m2;				
	
	return 0;
}	
