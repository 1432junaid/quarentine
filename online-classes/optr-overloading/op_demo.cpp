#include<iostream>
using namespace std;

class myclass{
//	public:
	int x;
	int y;
	public:
	myclass(int a,int b){
		x = a;
		y = b;
	}
	friend myclass& operator+(const myclass&,const myclass&);
	friend myclass& operator/(const myclass&,const myclass&);
	int getX(){return x;}
	int getY(){return y;}
};
myclass& operator+(const myclass& m1,const myclass& m2){
	myclass* m= new myclass(0,0);
	m->x = m1.x+m2.x;
	m->y = m1.y+m2.y;
//	m1.x = 100;
	return *m;
}
myclass& operator/(const myclass& m1, const myclass& m2){		//this operator used to divide by 2
	myclass* m = new myclass(0,0);
	m->x = (m1.x + m2.x)>>1;
	m->y = (m1.y + m2.y)>>1;
	return *m;
}
int main(){
	myclass m1(10,20);
	myclass m2(50,60);
//	myclass& m =m1+m2;
//	cout<<m.x<<"\t"<<m.y<<endl;
	myclass& m = m1/m2;
	cout<<m.getX()<<"\t"<<m.getY()<<endl;
	return 0;
}
