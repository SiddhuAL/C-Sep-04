//This program is used to swap two numbers without using a third variable
#include<stdio.h>
int main ()
{
	int a,b ;
	printf("Enter 2 numbers (a,b):\n");
	scanf("%d %d",&a,&b);
	printf("Now we have a = %d and b = %d\n",a,b);
	a = a+b;
	b = a -b;
	a = a -b;
	printf("After swapping, a = %d and b = %d",a,b);
	return 0 ;
}
