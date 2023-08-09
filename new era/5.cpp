#include<iostream>
#include<string.h>
using namespace std;
class Car{
	private:
		int id;
		char company_name[100];
		char color[20];
	public:
		char model[50];
		int release_year;
};
main(){
	Car c[100];
	int i,n;
	cout<<"How many car information Enter=";
	cin>>n;
	for(i=0; i<n; i++){
		cout<<"Enter car Id:";
		cin>>c[i].id;
		cout<<"Enter car Company name:";
		cin>>c[i].company_name;
		cout<<"Enter car Color:";
		cin>>c[i].color;
		cout<<"Enter car Model:";
		cin>>c[i].model;
		cout<<"Enter car Release year:";
		cin>>c[i].release_year;		
	}
	for(i=0; i<n; i++){
		cout<<"car Id= "<<c[i].id<<endl
			<<"car Company name= "<<c[i].company_name<<endl
			<<"car Color= "<<c[i].color<<endl
			<<"car Model= "<<c[i].model<<endl
			<<"car Release year= "<<c[i].release_year<<endl;
	}
}
