#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	printf ("Enter age");
	scanf ("%d",&age);
	(age>18)? printf("eligible to vote"):printf("not eligible");
	getch();
	//syntax of ternary operator is 
	         // exp1? exp2: exp3;
}