#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++) //outer for row
	{
		for(j=1;j<=5;j++)//inner for column
    
		{
		printf("%d\t",j);
		}

		printf("\n");

	}
	getch();
}  //i=row
   //j=column