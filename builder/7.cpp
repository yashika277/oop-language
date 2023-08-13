#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:		
		string student_name;	
		int student_age;
	
	public:
		student(){	
			student_name = "ABC";
			student_age = 19;
			
			cout<<"---Default constructor---"<<endl;
			cout<<"Student name is: "<<student_name<<endl;
			cout<<"Student age is: "<<student_age<<endl;			
		}
		
	
		student(string name, int a){
				student_name = name;
				student_age = a;
				
				cout<<"---Parameterised constructor---"<<endl;
				cout<<"Student name is: "<<student_name<<endl;
				cout<<"Student age is: "<<student_age<<endl;
	}
	
};
int main(){
	student d;
	student p("XYZ", 10);
	
	return 0;
}
