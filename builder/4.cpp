#include<iostream>
#include<string.h>
using namespace std;
class India{
	public: 
	static char country[100];					
	static char state[100];							
			char capital[100];
			int area;
			int population;
			char chief_minister[100];
			char official_language[100];
			char major_city[100];
			
		void setData(){
			cout<<"Enter the capital of state: ";
			cin>>capital;
			cout<<"Enter the total area of state: ";
			cin>>area;
			cout<<"Enter the population of state: ";
			cin>>population;
			cout<<"Who is the chief minister of state: ";
			cin>>chief_minister;
			cout<<"What is the official language of state: ";
			cin>>official_language;
			cout<<"Which one is major city of state: ";
			cin>>major_city;			
		}	
		void getData(){
			cout<<"Capital of state is: "<<capital<<endl
				<<"Total area of state is: "<<area<<endl
				<<"Population of state is: "<<population<<endl
				<<"Chief minister of state is: "<<chief_minister<<endl
				<<"Official language of state is: "<<official_language<<endl
				<<"Major city of state is: "<<major_city<<endl;				
		}	
		static void display(){									
			cout<<"Country is: "<<country<<endl;
			cout<<"Details of "<<state<<" state in "<<country<<endl;
		}		
	
};
char India :: country[] = "India";
char India :: state[] = "Gujarat";

int main(){
	India i;	
	i.setData();
	cout<<"-----Details of state in india-----"<<endl;
	i.display();
	i.getData();
	
	return 0;
}

