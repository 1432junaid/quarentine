#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int min(int x,int y){				//for count the minimum
	return (x < y) ?x : y;
}

int min_jump(vector<int>&arr, int len){		//min jump function
	int *jumps = new int[len];
	if(len == 0 || arr[0] == 0)return INT_MAX;
	jumps[0] = 0;
	for(int i = 1;i < len; i++){
		jumps[i] = INT_MAX;
		for(int j = 0; j < i; j++){
			if(i <= j + arr[j] && jumps[j] != INT_MAX){
				jumps[i] = min(jumps[i],jumps[j]+1);
				break;
			}
		}
	}
	return jumps[len-1];
}

int main(){
	vector<int>arr = {6,3,1,1,4};
	int len = arr.size();
	cout<<min_jump(arr,len)<<endl;
}


