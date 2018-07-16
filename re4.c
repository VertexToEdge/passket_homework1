#include<stdio.h>
#include<stdlib.h>

int foo(int a){
	if(a<0)
		exit(0);
	
	if(a==1 || a==2){
		return 1;
	}
	return foo(a-1)+foo(a-2);
}

int main(void){
	printf("%d\n",foo(10));
	return 0;
}

