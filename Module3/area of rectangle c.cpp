#include<stdio.h>

int main()

{
	float length, width, area;
	
	printf("Enter the length of rectangle\n");
	scanf("%f", &length);
	
	printf("Enter the width of rectangle\n");
	scanf("%f", &width);
	
	area = length*width;
	
	printf("Area of rectangle is %f\n", area);
	
	return 0;
}

// Area of rectangle 
