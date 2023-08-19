#include<iostream>
using namespace std;
class Distance{
	private:
	int feet, inch;
	public:
	void set(int feet, int inch){
		this -> feet = feet;
		this -> inch = inch;
	}
	void get(){
		cout<<feet<<" feet "<<inch<<" inch"<<endl;
	}
	Distance operator+(Distance n){
		Distance temp;
		temp.feet =  this -> feet + n.feet;
		temp.inch =  this -> inch + n.inch;
		
			while(temp.inch >= 12){
				temp.feet++;
				temp.inch -= 12; 
			}
			return temp;
	}	
};
int main(){
	Distance d1, d2, sum;
	cout<<"-----Distance 1-----"<<endl;
	d1.set(5, 10);
	d1.get();
	cout<<"-----Distance 2-----"<<endl;
	d2.set(10, 20);
	d2.get();
	sum = d1 + d2;	
	cout<<"-----Sum of distance-----"<<endl;
	sum.get();
	return 0;
}
