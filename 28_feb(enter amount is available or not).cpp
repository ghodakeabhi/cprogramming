#include<stdio.h>
#include<conio.h>
void main()
{
	int amt;
	printf("Enter a amt");
	scanf("%d",&amt);
	if (amt > 1000)
	{
	printf("sufficient bal is available");
	}
	if (amt <= 1000)
	{
	printf("insufficient Bal");
	}

	getch();

}