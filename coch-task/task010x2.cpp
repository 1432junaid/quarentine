#include<iostream>
#include<map>
using namespace std;

int main(){
	map<char, int>m1('A',1);
	map<int ,char>::iterator itr1 = m1.begin();
	map<int ,char>::iterator itr2 = m1.end();
	while(itr1 != itr2){
		cout<< itr1->first <<":"<< itr1->second<<endl;
		itr1++;
	}

	return 0;
}
