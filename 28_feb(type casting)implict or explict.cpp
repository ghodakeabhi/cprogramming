#include<stdio.h>
#include<conio.h>
void main()
{

	int a=5, b=2;
	float res;
	res = a/b;
	printf ("Implict type cast res=%f",res);

	res=(float) a/b;
	printf ("explict type cast res=%f",res);

	getch();


}