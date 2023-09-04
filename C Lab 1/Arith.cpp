//This program is for calculating arithmetic applications//
#include<stdio.h>
int main()
{
	printf("Give two numbers :");
	int a,b;
	scanf("%d %d",&a, &b);
	int c = a + b;
	int d = a*b;
	int e = a -b;
	int f = a /b;
	printf("The addition is %d ",c);
	printf(" The subtraction is %d",e);
	printf("The multiplication is %d",d);
	printf("The division is %d",f);
	return 0;
}
