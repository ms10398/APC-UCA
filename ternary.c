#include<stdio.h>


int main()
{
	int a=2,b=3,c=5;
	int high = a>b?(a>c?a:c):(b>c?b:c);
	printf("%d", high);
}
