#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> *v = new vector<int>(10,5);
	vector<int>::iterator itr1 = v->begin();
	vector<int>::iterator itr2 = v->end();
	while(itr1 != itr2){
		cout<<*itr1<<endl;
		itr1++;
	}
	delete v;
	return 0;
}

//this is not done 

/// due on monday
