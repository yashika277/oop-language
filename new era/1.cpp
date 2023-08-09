#include<iostream>
#include<string.h>
using namespace std;
class Distance{
	public:
		int feet;
		int inch;
};
int main(){
	Distance d,d1,sum;
	
	cout<<"----------Enter first feet----------"<<endl;
	cout<<"Enter feet:";
	cin>>d.feet;
	cout<<"Enter inch:";
	cin>>d.inch;
	
	cout<<"----------Enter second feet----------"<<endl;
	cout<<"Enter feet:";
	cin>>d1.feet;
	cout<<"Enter inch:";
	cin>>d1.inch;
	sum.feet=d.feet+d1.feet;
	sum.inch=d.inch+d1.inch;
	while(sum.inch>=12){
		sum.feet++;
		sum.inch-=12;
	}
	cout<<"Sum of feet= "<<sum.feet<<endl;
	cout<<"Sum of Inch= "<<sum.inch<<endl;
	
	return 0;
}
