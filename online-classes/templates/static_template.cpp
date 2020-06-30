#incldue<iostream>
using namespace std;

template<typename T>
class myclass{
	static:
	static int k;
	static void display(){
		cout<<k<<endl;
	}
};

int main(){
	myclass<int> m1;
	myclass<int> m2;
	myclass<string> m3;
	cout<< Myclass<int>::k<<endl;
	return 0;
}
