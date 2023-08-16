#include<iostream>
#include<string.h>
using namespace std;
class animal{
	public:
		int age;
		string name;
};
class Zebra:public animal{
	public:
		void set_mess(){
			cout<<"The Zebra name is: ";
			cin>>name;
			cout<<"The zebra age: ";
			cin>>age;
		}
		void get_mess(){
			cout<<"Zebra name: "<<name<<endl;
			cout<<"Zebra age: "<<age<<endl;
		}
};
class Dolphin:public animal{
	public:
		void set_mess(){
			cout<<"The Dolphin name is: ";
			cin>>name;
			cout<<"The Dolphin age: ";
			cin>>age;
		}
		void get_mess(){
			cout<<"Dolphin name: "<<name<<endl;
			cout<<"Dolphin age: "<<age<<endl;
		}
};
main(){
	cout<<"..........zebra information............"<<endl;
	Zebra z;
	z.set_mess();
	z.get_mess();
	
	cout<<"..........Dolphin information............"<<endl;
	Dolphin d;
	d.set_mess();
	d.get_mess();
	
}
 
