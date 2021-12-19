#include<stdio.h>
main()
{
	int i=0,j=0;
	for(i=0;i<=10;i++)
	{
		for(j=0;j<i;j++)
		{
			if((i+j)%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			
		}
		printf("\n");
	}
}
