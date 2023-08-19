#include<iostream>
#include<string.h>
using namespace std;
class mother{
	public:
	string message;
	void display(){
		cout<<"Enter Message";
	}
};
class daughter:public mother{
	public:
		void display(){
			cout<<"Message by daughter";
		}
};
main(){
	daughter d;
	d.display();
}
