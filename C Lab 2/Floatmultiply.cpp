//This program is used to multiply two floats and present the output in both forms
#include<stdio.h>
int main()
{
	float a,b;
	printf("\tEnter two numbers of your choice:\n");
	printf("---------------------------------------------------\n");
	scanf("%f %f",&a,&b);
	float c = a * b;
	printf("The multiplication of given two numbers in float form :%f",c);
	int d = a*b;
	printf("The multiplication of given two numbers in integer form :%d",d);
	return 0 ;
}
