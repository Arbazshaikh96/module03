#include<stdio.h>


int main()


{
	int tamp;
	printf("weather today");
	scanf("%d", & tamp);
	
	if(tamp<0)
	{
		printf("freazing weather");
	}else if(tamp >0 && tamp <=10)
	{
		printf("tamprature is very cold");
	}else if(tamp >10 && tamp <=20)
	{
		printf("tamprature is cold");
	}else if(tamp >20 && tamp <=30)
	{
		printf("normal tamprature");
	}else if(tamp >30 && tamp <=40)
	{
		printf("its hot don't go outside");
	}
	else
	{
		printf("YOU'RE DEAD");
	}
	
	return 0;
}
