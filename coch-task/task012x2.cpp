#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int find_num(vector< int >&arr){
	int i=0;
	vector<int>::iterator itr1 = arr.begin();
	vector<int>::iterator itr2 = arr.end();
	std::sort(arr.begin(),arr.end());
	while(itr1 != itr2 ){
		if(*itr1 < 0)goto x;
		if( *(itr1+1) != *(itr1)+1) return ((*itr1)+1);
		x:
		itr1++;
	}
}
int main(){
	vector<int >arr={3,1,0,-1};
	cout<<"missing number is :"<<find_num(arr)<<endl;
	return 0;
}
