#include<iostream>
using namespace std;

class myclass{
	public:
	int x;
	static const int y;
	myclass(int a){
		x = a;
	}
	static void printer();
};

int main(int argc, char* argv[]){
	myclass*  m= new myclass();
	myclass* m1= new myclass();
	
	cout<< m->x <<"\t"<<my->y<<endl;
	return 0;
}
