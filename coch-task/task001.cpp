#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> two_sum(vector<int>&numbers,int target){
	map<int,int>mapping;
	vector<int>result;
	for(int i= 0;i<numbers.size();i++){
		mapping[numbers[i]] = i;
	}
	for(int i=0;i<numbers.size();i++){
		int searched = target - numbers[i];
		if(mapping.find(searched) != mapping.end()){
			result.push_back(i+1);
			result.push_back(mapping[searched]+1);
			break;
		}
	}
	return result;
}

int main(){
	vector<int>numbers= {2,7,11,15};
	vector<int>result;
	result = two_sum(numbers,17);
	for(vector<int>::iterator itr =result.begin(); itr<result.end(); itr++){
		cout<< *itr<<endl;
	}
	return 0;
}
