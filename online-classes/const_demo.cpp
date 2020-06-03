#include<iostream>
using namespace std;

class myclass{
	public:
	int x = 10;
	int y = 20;
	void fun(int p,int q)const{
		int temp = p;
		p = q+15;
		q = temp;
	}
};

int main(){
	myclass m;
	m.fun(m.x,m.y);
	cout<<m.x<<"\t"<<m.y<<endl;
	return 0;
}
