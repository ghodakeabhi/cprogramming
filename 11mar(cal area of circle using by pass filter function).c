#include<stdio.h>
#include<conio.h>
float AOCIR(int r);
float AOCIR(int r)
{
  return(3.14*r*r);	
}

void main()
{
	int r;
	float ans;
	printf("Enter Radius");
	scanf("%d",&r);

	ans=AOCIR(r);    //actual parameter
	printf("area of circle is %f", ans);
	getch();
}