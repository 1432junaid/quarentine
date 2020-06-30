#include<iostream>
using namespace std;

//stack unbinding

class calc{
	public:
	int calculator(){
		int  x,y;
		cout<<"Enter two values:"<<endl;
		cin>>x>>y;
		if(x<0){
			throw x;			//when this line execute this will check for the catch bolck if not 1
		}else if(y<0){
			throw y;
		}
		return x*y;
	}
	void printer(){
		int result;
		try{
			result = calculator();
			cout<<"Result is:"<<result <<endl;
		}catch(int& a ){
			cout<<a<<"value is less than 0"<<endl;
		}
	}
};

int main(){
	calc c;
	c.printer();
	return 0;
}
/*
[note : 1
	find any catch block then stack poped and check the catch block in the calling function this is known as stack 
	unbinding]
*/
