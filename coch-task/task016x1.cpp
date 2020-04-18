#include<iostream>
#include<vector>
using namespace std;

bool reach_or_not(vector<unsigned int>&v1){
	vector<unsigned int>::iterator itr1 = v1.begin();
	vector<unsigned int>::iterator itr = v1.begin();
	vector<unsigned int>::iterator itr2 = v1.end();
	bool result;
	while(itr != itr2){
//		cout<<itr1<<endl;
		itr1 += *itr1;
		itr++;
	}
	if(itr1 == itr2-1)return result;
	if(itr == itr2 && itr1 != itr2)return 0;
}

int main(){
	vector<unsigned int>v1 = {2,3,1,1,4};
	bool result = reach_or_not(v1);
	if(result == 1)cout<<"true"<<endl;
	if(result != 1)cout<<"false"<<endl;
	return 0;
}

