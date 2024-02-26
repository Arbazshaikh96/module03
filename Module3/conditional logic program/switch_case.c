#include<stdio.h>

//switch case menu driven program

int main()


{
	int choice;
	printf("enter1 for monday \nenter2 for tuesday \n enter3 for wednesday \n enter4 for thursday \n enter5 for friday \n enter6 for saturday \n enter7 for sunday");
	scanf("%d", & choice);
	
	switch(choice)
	
	{
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saturday");
			break;
		case 7:
			printf("\nsunday");
			break;
		default:
		printf("invalid choice");
		break;
	}
	
	
	
	return 0;
}
