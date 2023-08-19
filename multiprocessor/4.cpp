#include<iostream>
#include<string.h>
using namespace std;
class points{
	public:
		int x;
		void set(int x){
			this->x=x;
		}
		void get(){
			cout<<"X= "<<x<<endl;
		}
		operator++(int){
			return x++;
		}
		operator--(int){
			return x--;
		}
};
int main(){
	points p,p1;
	cout<<"increment"<<endl;
	p.set(5);
	p.get();
	p++;
	p.get();
	
	cout<<"decrement"<<endl;
	p1.set(9);
	p1.get();
	p1--;
	p1.get();
	return 0;
}
