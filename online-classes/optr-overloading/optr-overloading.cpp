
//		operator Overloading
#include<iostream>
using namespace std;
class opdemo{
	public:
	int x;
	int y;
	opdemo(int a,int b){
		x = a;
		y = b;
	}
/*	opdemo operator+(opdemo& a){
		a.x = a.x + this->x;
		a.y = a.y + this->y;
		return a;
	}*/
	opdemo* operator+(opdemo& a){
		this->x = a.x + this->x;
		this->y = a.y + this->y;
		return this;
	}
};

int main(){
	opdemo* od(10,20);
	opdemo* op(20,30);
//	opdemo& ode = od + op;
	od+op;
	cout<< od->x<<endl;
	cout<< od->y<<endl;

//	cout<< od.x + op.x <<endl;
//	cout<< od.y + op.y <<endl;
//	od+op;

	return 0;
}
