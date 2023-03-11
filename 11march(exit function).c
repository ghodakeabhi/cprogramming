#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	do
	{
		printf("\n enter a number");
		scanf("%d",&n);
		if(n==2)
		{
		exit(0);    //exit the programe
		}
		i++;
	}while(i<=10);

	getch();
}