//https://www.hackerrank.com/chalanges/box_it/problem

#include<iostream>
#include<string>
using namespace std;

class box{
	int l;
	int b;
	int h;
	public:
	box():l(0),b(0),h(0){}
	box(int x,int y,int z){
		l = x;
		b = y;
		h = z;
	}
	int get_lenght(){
		return l;
	}
	int get_breadth(){
		return b;
	}
	int get_height(){
		return h;
	}
	long long cal_volume(){
		return (l*b*h);
	}
	friend bool operator<(const box&, const box&);
	friend ostream& operator<<(ostream& cout, const box&);
};
bool operator < (const box& m1, const box& m2){
	bool x;
	if(m1.l < m2.l)return 1;
	else if(m1.b < m2.b && m1.l == m2.l)return 1;
	else if( (m1.h < m2.h && m1.l == m2.l) && (m1.h < m2.h && m1.b == m1.b))return 1;
	else return 0;
}
ostream& operator <<(ostream& cout,const box& m1){
	 cout << m1.l<<" "<<  m1.b <<" "<< m1.h;
	return cout;
}
//ostream& opreator<<(ostream& out,box& B)
int main(){
	class box m2(20,20,20);
	class box m3(20,20,10);
	bool x = m3<m2;
	cout<< x <<endl;
	cout << m2;
	return 0;
}
