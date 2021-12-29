#include<stdio.h>
int main()
{
	int a[3][3], b[3][3], c[3][3], i, j, sum=0;
	printf("Enter Matrix Elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter The Matix Numbers [%d][%d]" , i, j);
			scanf("%3d", &a[i][j]);
		}
	}
	
	printf("\nThe Matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		sum = sum+a[i][j];
	}
	printf("\nThe sum of Diogonal Elements of a Matrix = %d", sum);
}
