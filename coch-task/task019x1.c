#include<stdio.h>
void printer(int *,int);
void permu(int *,int);
int main(){
	int a[] = {1,2,3};
	int len = sizeof(a)/sizeof(a[0]);
//	printer(a,len);
//	printf("\n");
	permu(a,len);
	return 0;

}
void permu(int a[],int len){
	int temp;
//	for(int i = 0; i < len; i++){
		for(int j = 0; j < len; j++){
			for(int k =len-1; k >= 0; k--){
				temp 	= a[k];
				a[k] 	= a[k-1];
				a[k-1]	= temp;
				printer(a,len);
			}
		}
//	}

}
void printer(int a[],int len){
	for(int i= 0; i<len; i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
