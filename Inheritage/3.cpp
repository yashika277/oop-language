#include<iostream>
#include<string>
using namespace std;
class emp_data{
	public:
		int emp_id;
		string name;
		void setdata(){
			cout<<"Enter Employee Id: ";
			cin>>emp_id;
			cout<<"Enter Employee Name: ";
			cin>>name;
		}
};
class emp_print{
	public:
	int emp_salary,year;
	void setprint(){
		cout<<"Enter Employee joining year: ";
		cin>>year;
		cout<<"Enter Employee salary: ";
		cin>>emp_salary;
	}
};
class emp_read:public emp_print,public emp_data{
	public:
		void getdata(){
			cout<<".............Employee information............."<<endl;
			cout<<"Employee id: "<<emp_id<<endl;
			cout<<"Employee name: "<<name<<endl;
			cout<<"Employee joining year: "<<year<<endl;
			cout<<"Employee salary: "<<emp_salary<<endl;
		}
};
main(){
	emp_read e;
	e.setdata();
	e.setprint();
	e.getdata();
}
