//CONVERT TEMPRATURE FAHRENHEIT TO CELSIUS
#include<stdio.h>

int main()

{
	float c,fh;
	printf("Enter temprature in fahrenheit : ");
	scanf("%f",& fh);
	
	c= (fh-32) / 1.8;
	
	printf("Temprature in celsius is : %f", c);
	
	return 0;
}
