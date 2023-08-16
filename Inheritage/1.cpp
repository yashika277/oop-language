#include<iostream>
#include<string.h>
using namespace std;
class mother{
	public:
	string message;
	void setmessage(){
		cout<<"Enter Message: ";
		cin>>message;
	}
};
class daughter:public mother{
	public:
		void display(){
			cout<<"Message :"<<message;
		}
};
main(){
	daughter d;
	d.setmessage();
	d.display();
}
