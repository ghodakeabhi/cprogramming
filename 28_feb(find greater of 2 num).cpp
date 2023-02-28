#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	printf("Enter a 2 Num");
	scanf("%d%d",&x,&y);

	if(x>y)
		printf("x is greater");
	
	else 
		printf("y is greater");

	getch();
}