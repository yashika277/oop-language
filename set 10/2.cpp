#include<iostream>
#include<string.h>
using namespace std;
int main(){		
	int a, b, c;
	double d;
	char solution[] = "Can't divided by 0";
	cout<<"Enter value of A: ";
	cin>>a;
	cout<<"Enter value of B: ";
	cin>>b;
	try{
	if(b!=0){
		c = a/b;
		cout<<"Ans is: "<<c<<endl;		
	}
	else{
		throw d;				
	}
	}
	catch (...){
		
		cout<<"Can not divided by zero"<<endl;
	}
	return 0;
}
