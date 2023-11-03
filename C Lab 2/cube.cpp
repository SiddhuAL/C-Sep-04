//This program is used to find the cube of a given number
#include<stdio.h>
#include<math.h>
int main()
{
	float b ;
	printf("Enter your number:");
	scanf("%f",&b);
	float a = pow(b,3);
	printf("The cube of given number is %f",a);
	return 0;
}
