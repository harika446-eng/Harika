#include<stdio.h>
int main()
{
	int choice=0;
	printf("enter your choice\n");

	scanf("%d",& choice);
	switch(choice)
	{
		case 1:
			printf("pizza\t,Rs239");
			break;
		case 2:
			printf("burger\t,Rs129")	;
			break;
		case 3:
			printf("pasta\t,Rs179");
		break;		
		case 4:
			printf("french fries\t,Rs99");
		break;		
		case 5:
			printf("sandwich\t,Rs149");	
		break;	
		default:printf("didn't found any food item");							
	}

	return 0;
}
