#include <stdio.h>

int main(int argc,char *argv[])
{
	int a=0;
	int b=0;
	
	if(argc != 2)
		exit(0);

	/*a = 1;
	do{
		b=1;
		do{
			printf("%d\n",a*b);
			b=b+1;
		}
		while(b<=9);
		a=a+1;
	}
	while(a<=9);
	*/

	a=1;
	while(a<=9){
	b=1;
	while(b<=9){
	printf("%d\n",a*b);
		b=b+1;
	}

	a=a+1;
	}

	return 0;
}
