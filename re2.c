#include <stdio.h>

int foo(int a,int b,int c){
	int res;
	res = a+b+c;
	return res;
}

int main(){
	int a=0;	
	char buf[1024]={0,};
	foo(1,2,10);
	printf("%d",foo(5,1,2));
	return 0;
}
