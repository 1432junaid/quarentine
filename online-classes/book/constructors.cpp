#include<iostream>
using namespace std;

class date{
	int d,m,y;
	public:
	date(int,int,int);		//
	date(int,int);			//
	date(int);
	date();
	date(const char*);
};
date::date(const char* a){
	cout<<a<<endl;
}
date::date(int x,int y,int z){
	d = x?x:today.d;
	m = y;
	y = z;
	cout<<d<<"/"<<m<<"/"<<y<<endl;
}
int main(){
	date m1(02,02,2020);
//	cout<<m1.d<<"/"<<m1.m<<"/"<<m1.y<<endl;			//Error d,y,m are private members

	date m2("4 aug");
	date today(05);

//	m1 = m2;
//	m1.date("junaid");
	return 0;
}
