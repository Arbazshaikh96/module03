//ARRAY IS COLLECTION OF MULTIPLE WITH SAME DATATYPE

#include<stdio.h>

int main()

{
	int pr[5],i;
	
	for(i=0;i<5;i++)
	{
		printf("enter pr for %d student:",i+1);
		scanf("%d",&pr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d student: %d pr",i+1,pr[i]);
	}
	
	
	return 0;
}
