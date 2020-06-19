#include<iostream>
#include<string>
using namespace std;

class myclass{
	public:
	template<typename T>
	int compare(const T &x, const T &y){
		if(x > y)return 1;
		if(y > x)return -1;
		return 0;
	}
};

int main(){
	myclass m;
//	cout<<m.compare(4,5)<<endl;
//	cout<<m.compare(3.5,6.22)<<endl;
//	cout<<m.compare("jd","man")<<endl;		//this will give error
	string s1 = "jd";
	string s2 = "man";
	cout<<m.compare(s1,s2)<<endl;			//this rum when we take variables as argumrnts
	cout<<m.compare<string>("jd","jd")<<endl;	//this will also work when we use the type <string> in this case 
							//we have to take constant of const T &c will mandatiory
	return 0;
}
