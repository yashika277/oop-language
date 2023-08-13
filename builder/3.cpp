#include<iostream>
#include<string.h>
using namespace std;
class Highschool{
	public:
		int id;
		char student_name[100];
		int student_roll_no;
		int student_standard;
		int student_age;
		char student_contact[100];
		static char student_edu_institute_name[100];
		char student_adress[100];
		
		void setData(){
			cout<<"Enter the student id: ";
			cin>>id;
			cout<<"Enter the student name: ";
			cin>>student_name;
			cout<<"Enter the student roll No. ";
			cin>>student_roll_no;
			cout<<"Enter the student standard: ";
			cin>>student_standard;
			cout<<"Enter the student age: ";
			cin>>student_age;
			cout<<"Enter the student contact No. ";
			cin>>student_contact;
			cout<<"Enter the student adress: ";
			cin>>student_adress;
		}
		void getData(){
			cout<<"Student Id: "<<id<<endl
				<<"Student Name: "<<student_name<<endl
				<<"Student Roll No. "<<student_roll_no<<endl
				<<"Student Standard: "<<student_standard<<endl
				<<"Student age: "<<student_age<<endl
				<<"Student Contact No. "<<student_contact<<endl
				<<"Student Adress: "<<student_adress<<endl;		
			}			
};
class College{
	public:
		int id;
		char student_name[100];
		int student_roll_no;
		int student_standard;
		int student_age;
		char student_contact;
		static char student_edu_institute_name[100];
		char student_adress[100];
		void setData(){
			cout<<"Enter the student id: ";
			cin>>id;
			cout<<"Enter the student name: ";
			cin>>student_name;
			cout<<"Enter the student roll No. ";
			cin>>student_roll_no;
			cout<<"Enter the student standard: ";
			cin>>student_standard;
			cout<<"Enter the student age: ";
			cin>>student_age;
			cout<<"Enter the student contact No. ";
			cin>>student_contact;
			cout<<"Enter the student adress: ";
			cin>>student_adress;
		}
		void getData(){
			cout<<"Student Id: "<<id<<endl
				<<"Student Name: "<<student_name<<endl
				<<"Student Roll No. "<<student_roll_no<<endl
				<<"Student Standard: "<<student_standard<<endl
				<<"Student age: "<<student_age<<endl
				<<"Student Contact No. "<<student_contact<<endl
				<<"Student Adress: "<<student_adress<<endl;			
		}			
};
char Highschool :: student_edu_institute_name[] = "Diamond girls";		
char College :: student_edu_institute_name[] = "RNW IT Institute";

int main(){
	Highschool h;
	College c;
	
	h.setData();
	cout<<"Highscholl Name : "<<h.student_edu_institute_name<<endl;
	h.getData();
	cout<<endl;		
	
	h.setData();
	cout<<"College Name : "<<c.student_edu_institute_name<<endl;
	h.getData();
	
	
	return 0;
}
