#include<stdio.h>
main()
{
	printf("Enter your choice :\n1. Burger\n2. Pizza\n3. Pasta\n4. Sandwitch\n5. French Fries\n");
	int choice;
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("Burger\nPrice-129/-");
			break;
		case 2:
			printf("Pizza\nPrice-239/-");
			break;
		case 3:
			printf("Pasta\nPrice-179/-");
			break;
		case 4:
			printf("Sandwitch\nPrice-149/-");
			break;
		case 5:
			printf("French Fries\nPrice-99/-");
			break;
		default : printf("Your choice is wrong");
		
	}
	
}
