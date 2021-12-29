#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	char name[30];
	int age;
	int phone;
	double salary; 
} Employee;

int main()
{
	int n=3,i=0;
	Employee employees[n];
	printf("Enter %d employee Details\n \n",n);
	for (i=0;i<n;i++)
	{
		printf("Employee %d :- \n", i+1);
		
		printf("Name : ");
		scanf("%s",employees[i].name);
		
		printf("age : ");
		scanf("%d", &employees[i].age);
		
		printf("phone : ");
		scanf("%d",&employees[i].phone);
		
		printf("salary : ");
		scanf("%lf", &employees[i].salary);
		
		
		printf("\n");
		
	}
	
	printf("----- ALL EMPLOYEES DETAILS -----\n");
	for(i=0;i<n;i++)
	{
		printf("Name \t: ");
		printf("%s \n", employees[i].name);
		
		printf("age \t: ");
		printf("%d \n", employees[i].age);
		
		printf("phone \t: ");
		printf("%d \n",employees[i].phone);
		
		printf("salary \t: ");
		printf("%.2lf \n",employees[i].salary);
		
		printf("\n");
	}
}
