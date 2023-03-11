#include<stdio.h>
#include<conio.h>
void main()
{

	int i,j;
	for(i=1;i<=4;i++) //outer for row  //display the structure
	{
		for(j=2;j<=10;j=j+2)//inner for column     //starting , ending, condition
    
		{
		printf("%d\t",j);
		}

		printf("\n");

	}

	getch();
}