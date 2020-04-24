#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;
void printer(int *,int);
vector<int> permu(int *,int);
int next_permu(vector<int> ,int);
void swap(int*,int*);
int sum_arr(int *,int);

int main(){
	int a[] = {1,2,3};
	int len = sizeof(a)/sizeof(a[0]);
	int result = sum_arr(a,len);
	printf("%d\n",result);
	vector<int > v1;
	v1 = permu(a,len);
	vector<int >::iterator itr1 = v1.begin();
	vector<int >::iterator itr2 = v1.end();
	sort(itr1,itr2);
	int next = next_permu(v1,result);
	cout<<next<<endl;
	return 0;

}

vector<int> permu(int a[],int len){
	vector<int>v1;
	int result;
	for(int i; i<len ;i++){
		for(int j = 1;j <= len; j++){
			for(i = 0; i< len-1; i++){
				swap(&a[i], &a[i+1]);
				printer(a,len);
				result = sum_arr(a,len);
				cout<< result<<endl;
				v1.push_back(result);
			}
		}
	}
	return v1;
}

void printer(int a[],int len){
	for(int i= 0; i<len; i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}

void swap(int *a,int *b){
		int temp;
		temp 	= *a;
		*a 	= *b;
		*b	= temp;
}

int sum_arr(int a[],int len){
	int sum1 = 0 ;
	int m = len-1;
	for(int i =0; i<len; i++,m--){
		int res = pow(10 , m);
		sum1 += a[i] * res;
	}
	return sum1;
}


int next_permu(vector<int> &v1,int target){
	vector<int>::iterator itr1 = v1.begin();
	vector<int>::iterator min = v1.begin();
	vector<int>::iterator itr2 = v1.end();
	while(itr1 != itr2){
		if(*itr1 == target)return *(itr1+1);
		if(target == *itr2)return *min;
		itr1++;
	}
}
