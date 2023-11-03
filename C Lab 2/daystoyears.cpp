//This program is used to convert days into years
#include<stdio.h>
int main()
{
	printf("Enter the required number of days :");
	int a ;
	scanf("%d",&a);
	printf("After converting.........\n");
	float b = a/ 365.0;
	printf("So, %d days are %f years",a,b);
}
