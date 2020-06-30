#include<iostream>
using namespace std;

//[note: not completed]

class bean{
	public:
	int correct;
	int incorrect;
	bean(){
		cout<<"constructor called:"<<endl;
	}
	~bean(){
		cout<<"destructor called :"<<endl;
	}
};
class calc{
	public:
	int calculator(){
		bean *b = new bean();
		int  x,y;
		cout<<"Enter two values:"<<endl;
		cin>>x>>y;
		if(x<0){
			b->incorrect = x;
			b->correct = 0;
			delete b;
			throw b;
		}else if(y<0){
			b->correct = x;
			b->incorrect = y;
			delete b;
			throw b;
		}
		return x*y;
	}
	void printer(){
		int result;
		try{
			result = calculator();
			cout<<"Result is:"<<result <<endl;
		}catch(bean* b){			//this create a copy of class bean
			if(b->correct == 0){
				cout<<"value of x is less then 0"<<endl;
			}else if(b->correct != 0){
				cout<<"value of y is less then 0"<<endl;
			}
			delete b;
		}
		cout<<"End of program :::"<<endl;
	}
};

int main(){
	calc c;
	c.printer();
	return 0;
}
