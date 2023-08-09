#include<iostream>
#include<string.h>
using namespace std;
main(){
	int h1,m1,s1,h2,m2,s2;
	int hour,minute,second;
	cout<<"----------Enter first time-------------"<<endl;
	cout<<"Hours: "; cin>>h1;
	cout<<"Minutes: "; cin>>m1;
	cout<<"Seconds: "; cin>>s1;

	cout<<"----------Enter second time-------------"<<endl;
	cout<<"Hours: "; cin>>h2;
	cout<<"Minutes: "; cin>>m2;
	cout<<"Seconds: "; cin>>s2;

	second=s1+s2;
	minute=m1+m2+(second/60);
	hour=h1+h2+(minute/60);
	minute=minute%60;
	second=second%60;
	cout<<"Total Time is: "<<hour<<":"<<minute<<":"<<second;

}
