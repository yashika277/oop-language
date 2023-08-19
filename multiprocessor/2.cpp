#include<iostream>
#include<string.h>
using namespace std;
class member{
	public:
		void data(){
			cout<<"0 arguments="<<endl;
		}
		void data(int a){
			cout<<"1 arguments= "<<a<<endl;
		}
		void data(int a,int b){
			cout<<"2 arguments = "<<a<<","<<b<<endl;
		}
		void data(int a,int b,int c){
			cout<<"3 arguments = "<<a<<","<<b<<","<<c<<endl;
		}
};
main(){
	member m;
	m.data();
	m.data(10);
	m.data(10,20);
	m.data(10,20,30);
}
