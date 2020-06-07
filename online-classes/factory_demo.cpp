#include<iostream>
using namespace std;

class myclass{
	myclass(int m,int n){
		x = m;
		y = n;
	}
	public:
	int x,y;
	int sum(int a,int b){
		return a+b;
	}
	static myclass* factory(int a, int b){
		static myclass* m = NULL;
		if(m == NULL)m = new myclass(a,b);
		return m;
	}
};

int main(){
	myclass* m = myclass::factory(10,20);
	int  k = m->sum(m->x,m->y);
	cout<<k<<endl;
	m->x=12;
	m->y=89;
	myclass*m1= myclass::factory(20,30);
	int j = m1->sum(m1->x,m1->y);
	cout<<j<<endl;
	return 0;
}

