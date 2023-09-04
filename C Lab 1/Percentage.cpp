//This program is used to calculate percentage//
#include<stdio.h>
int main()
{
	printf("Give the marks of student in five subjects");
	float a , b , c , d, e;
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	int f = (a+b+c+d+e)/5;
	printf("The percentage of student is %f",f);
	return 0;
}

