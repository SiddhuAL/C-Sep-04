//This program converts given distance in km to others
#include<stdio.h>
int main()
{
	printf("\tEnter the distance in kms:");
	float a ;
	scanf("%f",&a);
	float b = a*1000.0;
	float c = a*100000.0;
	float d = a*1000000.0;
	printf("After conversion.......\n");
	printf("\t %f kilometers is %f meters \n",a,b);
	printf("\t %f kilometers is %f centimeters \n",a,c);
	printf("\t %f kilometers is %f millimeters \n",a,d);
	return 0;
}
