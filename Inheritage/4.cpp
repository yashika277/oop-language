#include<iostream>
#include<string>
using namespace std;
class a{
	public:
		int id,salary,contact,experience;
		string name,address,comp_name,role,email;
		void setname(){
			cout<<"Enter Employee Id: ";
			cin>>id;
			cout<<"Enter Employee Name: ";
			cin>>name;
			cout<<"Enter Employee Role: ";
			cin>>role;
		}
};
class b:public a{
	public:
		void setsalary(){
			cout<<"Enter Employee Salary: ";
			cin>>salary;
			cout<<"Enter Employee experience: ";
			cin>>experience;
		}
};
class c:public b{
	public:
		void setadd(){
			cout<<"Enter Employee address: ";
			cin>>address;
			cout<<"Enter Employee company name: ";
			cin>>comp_name;
		}
		void getname(){
			cout<<"Employee name: "<<name<<endl;
			cout<<"Employee role: "<<role<<endl;
			cout<<"Employee Salary: "<<salary<<endl;
		}
};
class d:public c{
	public:
		void setcon(){
			cout<<"Enter Employee email: ";
			cin>>email;
			cout<<"Enter Employee contact: ";
			cin>>contact;
		}
		void getdata(){
			cout<<"Employee Id: "<<id<<endl;
			cout<<"Employee name: "<<name<<endl;
			cout<<"Employee role: "<<role<<endl;
			cout<<"Employee Salary: "<<salary<<endl;
			cout<<"Employee address: "<<address<<endl;
			cout<<"Employee experience: "<<experience<<endl;
			cout<<"Employee comapany name: "<<comp_name<<endl;
			cout<<"Employee email: "<<email<<endl;
			cout<<"Employee contact: "<<contact<<endl;
		}
};
main(){
	d e;
	e.setname();
	e.setsalary();
	e.setadd();
	e.getname();
	e.setcon();
	e.getdata();
}
