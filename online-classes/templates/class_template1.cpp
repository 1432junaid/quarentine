#include<iostream>
#include<string>
using namespace std;

template<class T,typename k>
class myclass{
	public:
	k compare(const T &x, const T &y){
		if(x > y)return 1;
		if(y > x)return -1;
		return 0;
	}
};

int main(){
	myclass<string> m;
	myclass<int> m1;
	myclass<double> m2;
	cout<<m1.compare(14,5)<<endl;
	cout<<m2.compare(3.5,3.2)<<endl;
	cout<<m.compare("jd","man")<<endl;
	return 0;
}
