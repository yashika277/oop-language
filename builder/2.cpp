#include<iostream>
#include<string.h>
using namespace std;
class Hotel{
	private:
		int id;
		char name[100];
		char type[50];
		int staff_size;
		int room_size;
		int establish_year;
		char address[50];
		int rating_type;
		char website[100];
	public:
		void setData(int id,char name[],char type[],int staff_size,int room_size,
		int establish_year,char address[],int rating_type,char website[]){
			this->id=id;
			strcpy(this->name,name);
			strcpy(this->type,type);
			this->staff_size=staff_size;
			this->room_size=room_size;
			this->establish_year=establish_year;
			strcpy(this->address,address);
			this->rating_type=rating_type;
			strcpy(this->website,website);
		}
		void getData(){
			cout<<"Hotel id:"<<id<<endl
				<<"Hotel Name:"<<name<<endl
				<<"Hotel Type:"<<type<<endl
				<<"Hotel staff_size:"<<staff_size<<endl
				<<"Hotel room_size:"<<room_size<<endl
				<<"Hotel establish_year:"<<establish_year<<endl
				<<"Hotel Address:"<<address<<endl
				<<"Hotel Rating_type:"<<rating_type<<endl
				<<"Hotel website:"<<website<<endl;
		}
};
main(){
	Hotel h;
	h.setData(14,"7skyAcrooms","veg",230,500,2022,"abcxyz",5,"abcd");
	h.getData();
}
