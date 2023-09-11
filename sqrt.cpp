//This program is used to find square root of a number
#include<stdio.h>
#include<math.h>
int main()
{
	printf("Enter a number:");
	float a;
	scanf("%f",&a);
	float b = sqrt(a);
	printf("The square root of given number is %f",b);
	return 0 ;
}
