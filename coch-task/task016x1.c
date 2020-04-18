#include<stdio.h>
int reach_or_not(int arr[],int len){
	for(int i = 0,j = 0;i<len; i++){
		j +=  arr[j];
		printf("%d\n",j);
		if(j == len-1)return 1;
		if(i == len-1)return 0;
		if(arr[i] > len-1)return 0;		//for not if array going out of array
		if(len<1)return 0;			//for not if array length is not more than 1
	}
}

int main(){
	int a[] = {1};
	int len = sizeof(a)/sizeof(a[0]);
	printf("%d\n",reach_or_not(a,len));
	return 0;
}
