#include<iostream>
#include<string.h>
using namespace std;
	class Message{
		private : 
		string name;
		public:
		string surname;				
		Message(string name){
			this->name = name;			
		}
		void print(){
					
			cout<<"Name : ";
		}
		void print(string surname){
			cout<<name<<" "<<surname;
		}		
	};
int main(){
	Message m("Yashika");
	m.print();
	m.print("Bhadkoliya");	
	return 0;
}	
