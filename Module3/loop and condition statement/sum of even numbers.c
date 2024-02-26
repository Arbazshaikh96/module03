#include<stdio.h>

int main()

{
	int a[7]= {3,8,1,7,4,6,2};
	int sum=0,i;
	
	for(i=0;i<7;i++);
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
	}
	printf("sum : %d\n",sum);
	
	return 0;
}
