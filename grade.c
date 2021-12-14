#include<stdio.h>
int main()
{
	int marks=0;
	printf("Enter your marks\n");
	scanf("%d",&marks);
	
	if(marks>=85)
	{
		
		printf("you got Grade A");
		
	}
	else if(marks>=70 && marks<85)
	{
		
		printf("you got Grade B");
		
	}
	else if(marks>=55 && marks<70)
	{
		
		printf("you got Grade C");
		
	}
	else if(marks>=40 && marks<55)
	{
		
		printf("you got Grade D");
		
	}
	else
	{
		printf("you got Grade F");
	}
	
	
	
	
	
	
	
	
	
}
