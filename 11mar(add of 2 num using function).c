#include<stdio.h>
#include<conio.h>
void add();    //function declaration
void add()     //function defination
{
	int a,b,res;
	printf("enter a 2 num");
	scanf("%d%d",&a,&b);
	res=a+b;
	printf("res is %d",res);
}
    void main()   //start from main
	{
	printf("msg1");
	printf("msg2");
	add();      //1st function call
	
	
	printf("msg3");
    printf("msg4");
	add();

	getch();
}