#include<stdio.h>

int main(){
	int a = 10,b = 20,c = 1;
	c += (-1) ? a:b;
	printf("%d\n",c);
	return 0;
}
