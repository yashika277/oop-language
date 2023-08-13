#include<iostream>
#include<string.h>
using namespace std;
class Emp{
	public:
	int id;
	char name[100];
	char role[50];
	int salary;
	int experience;
	char address[50];
	char email[20];
	char contact[10];
	
	void setData(){
		cout<<"Enter Emp Id:";
		cin>>id;
		cout<<"Enter Emp Name:";
		cin>>name;
		cout<<"Enter Emp role:";
		cin>>role;
		cout<<"Enter Emp Salary:";
		cin>>salary;
		cout<<"Enter Emp Experience:";
		cin>>experience;
		cout<<"Enter Emp Address:";
		cin>>address;
		cout<<"Enter Emp Email:";
		cin>>email;
		cout<<"Enter Emp Contact No.:";
		cin>>contact;
	}
	void getData(){
		cout<<"Emp id:"<<id<<endl
			<<"Emp Name:"<<name<<endl
			<<"Emp role:"<<role<<endl
			<<"Emp Salary:"<<salary<<endl
			<<"Emp Experience:"<<experience<<endl
			<<"Emp Address:"<<address<<endl
			<<"Emp Email:"<<email<<endl
			<<"Emp Contact No.:"<<contact<<endl;
	}
};
main(){
	Emp e[100];
	int i,n;
	cout<<"How many emp data enter:";
	cin>>n;
	for(i=0; i<n; i++){
		e[i].setData();
	}
	for(i=0; i<n; i++){
		e[i].getData();
	}
}
