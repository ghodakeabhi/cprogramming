#include<stdio.h>
#include<conio.h>
void SI();
void SI()
{
	float p,n,r,si;
	printf("\n Enter p,n,r");
	scanf("%f%f%f",&p,&n,&r);
	si=(p*n*r)*100;
	printf("\n simple Int is %f", si);
}
	void main()
	{
	
	SI();     //fun call ()
	SI();
	printf("\n msg1");
	SI();
	getch();
	}


