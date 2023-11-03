//This program is used to calculate the Simple interest and Compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	float prin,rate,time;
	printf("Enter principle amount:");
	scanf("%f",&prin);
	printf("Enter rate of interest:");
	scanf("%f",&rate);
	printf("Enter the time period :");
	scanf("%f",&time);
	float amount = (prin*rate*time)/100.0;
	printf("Calculating Simple Interest.....\n");
	printf("\t The amount you have to pay after the given time period is %f\n",amount);
	float amount_ = prin*pow((1+ rate/1.0),time);
	printf("Calculating Compound Interest (annually)\n ");
	printf("\tThe amount you have to pay after the given time period is %f\n ",amount_);
	return 0 ;
}
