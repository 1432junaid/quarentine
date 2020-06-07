#include<iostream>
using namespace std;

class demo{
//	demo(){}				//the whole calss is private so the constructro is also private
	public:
	int x;
	int y;
	int fun(int,int);
	static demo* creator(){
		demo* m = NULL;
		if(m == NULL) m = new demo();
		return  m;
	}
	~demo(){
		cout<<"destructor called:"<<endl;
	}
};

int demo::fun(int a,int b){
	x = a;				//x and y are the member of the demo class
	y = b;
	return x+y;
}

int main(){
	demo* m1 = demo::creator();
	m1->fun(10,30);
	cout<<"x: "<<m1->x<<endl<<"y: "<<m1->y<<endl;
	demo* m2 = demo::creator();
	m2->fun(40,50);
	cout<<"m2:x  "<<m2->x<<endl;
	cout<<"m2:y  "<<m2->y<<endl;
	delete m1;
	delete m2;
	return 0;
}
