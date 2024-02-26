#include<stdio.h>
//1
//23
//456
//78910
//1112131415

int main()

{
	int i, j, tamp=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",tamp);
			tamp++;
		}
		printf("\n");
	}
	
	
	return 0;
}

//debug

//i=1 1<=1 j=1 j<=1 tamp++
//

















