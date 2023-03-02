#include<stdio.h>
#include<conio.h>
void main()
{

	int a;

	printf("accept the num");
	scanf("%d",&a);

	if(a%2==0)
	{
		printf("no is even");
	}
	else
	{
		printf("no is odd");
	}

	getch();
}