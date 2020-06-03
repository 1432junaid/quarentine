#include<iostream>
using namespace std;

class date{
	public:
	int d,m,y;
	public:
	void init(int dd,int mm,int yy);
	void add_year(int n);
	void add_month(int n);
	void add_day(int n);
};
void fun(date& d){
	d.m = 20;
	cout<<d.m<<endl;
}
void date::init(int dd,int mm,int yy){
	d = dd;
	m = mm;
	y = yy;
	cout<<d<<"/"<<m<<"/"<<y<<endl;
}
int main(){
//	date today,m;
//	today.init(13,05,1997);
//	cout<<today.y<<endl;
//	cout<<m.y<<endl;
	date d;
	fun(d);
	return 0;
}
