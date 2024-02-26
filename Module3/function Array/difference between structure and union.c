//DIFFERENCE BETWEEN STRUCTURE AND UNION

#include<stdio.h>
union employee{
	int u_id;
	char u_name[100];
	float u_salary;
};
struct employee1{
	int s_id;
	char s_name[100];
	float u_salary;
};

int main()

{
	union employee u1;
	struct employee1 s1;
//	printf("enter is and name and salary for structure variable");
//	scanf("%d %s %f",&s1.s_id,&s1.s_name,&s1.u_salary);
//	printf("\t========structure=========");
//	printf("\nname is &s\t %d\t %f",s1.s_name,s1.s_id,s1.u_salary);
//	printf("\n enter is and name and salary for union variable");
//	printf("\n========union==========");
//	scanf("%d",&u1.u_id);
//	printf("id is %d",u1.u_id);
//	scanf("%s",u1.u_name);
//	printf("\n name is %s",u1.u_name);
//	scanf("%f",&u1.u_salary);
//	printf("\n salary is %f",u1.u_salary);
	
	printf("size of structure variable is %d",sizeof(s1));
	printf("\nsize of union variable is %d",sizeof(u1));
	
	
	return 0;
}
