#include<stdio.h>
#include<conio.h>
void main()
{

	int i,j;
	for(i=5;i>=1;i--) //outer for row
	{
		for(j=5;j>=i;j--)//inner for column
    
		{
		printf("%d\t",j);
		}

		printf("\n");

	}
       getch();

}