#include<stdio.h>
#include<conio.h>
void main()
{

	int i,j;
	/*for(i='A';i<='E';i++) //outer for row
	{
		for(j='A';j<=i;j++ )//inner for column     //(using character)
   
		{
		printf("%c\t",j);
		}

		printf("\n");

	}*/


	for(i=65;i<=69;i++) //outer for row
	{
		for(j=65;j<=i;j++ )//inner for column
   
		{
		printf("%d\t",j);        //(using ASCII value)
		}

		printf("\n");

	}
	  getch();

}