#include<iostream>
using namespace std;

void f();
struct date{		//representation
	int d,m,y;


void init(date& d,int,int,int);			//initialize d
void add_year(date& d, int n);			//add n  year to d
void add_month(date& d,int n);			//add n  months to d
void add_day(date& d, int n);			//add n day to d

};

int main(){
	struct date my_birthday;
	void f(){
		struct date today;
		today.init(16,10,1996);
		my_birthday.init(30,12,1950);
		date tommorow = today;
		tommorow.add_day(1);
	}
	return 0;
}


