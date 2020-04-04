#include<iostream>
#include<vector>
using namespace std;
int closest_sum_three(vector<int>&numbers,int targate){
	int ans=INT_MAX;
	for(int a=0;a<numbers.size()-1,a++){
		int b = a+1;
		int c = numbers.size()-1;
		while(b<c){
			int sum = numbers[a] + numbers[b] + numbers[c];
			if(sum)
}

int main(){
	vector<int>numbers = {-1,2,1,-4};
	int result  = closest_sum_three(numbers,1)
	cout<<result<<endl;
	return 0;
}
