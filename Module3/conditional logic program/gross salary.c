//gross salary of an employee 
#include<stdio.h>

int main()

{
	float bs, hra, da, gs;
	
	printf("Enter basic salary : ");
	
	scanf("%f", &bs);
	
	if(bs <=10000)
	{
		hra = bs * (20.00/100.00);
		da = bs * (80.00/100.00);
		gs = bs + hra + da;
		printf("your gross salary is : %f\n", gs);
	}
	else if(bs >10000 && bs <= 20000)
	{
		hra = bs * (25.00/100.00);
		da = bs * (90.00/100.00);
		gs = bs + hra + da;
		printf("your gross salary is : %f\n", gs);
	}
	else if(bs >20000)
	{
		hra = bs * (30.00/100.00);
		da = bs * (95.00/100.00);
		gs = bs + hra + da;
		printf("your gross salary is : %f\n", gs);
	}
	
	return 0;
}
