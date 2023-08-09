#include<iostream>
using namespace std;
class Home{
	public:
		int area,room;
		void setData(){
			cout<<"Enter home area :";
			cin>>area;
			cout<<"Enter how many area :";
			cin>>room;
		}
		void getData(){
			cout<<"house area:"<<area<<endl;
			cout<<"house room:"<<room<<endl;
		}
};
class Room{
	int l,b,h;
	public:
		void area(){
			cout<<"Enter room length :";
			cin>>l;
			cout<<"Enter room breath :";
			cin>>b;
			cout<<"Enter room height :";
			cin>>h;
		}
		void prt(){
			cout<<"room area:"<<l*b*h;
		}
};
main(){
	Home h;
	h.setData();
	h.getData();
	cout<<"Room detail....................!"<<endl;
	Room r;
	r.area();
	r.prt();
}



