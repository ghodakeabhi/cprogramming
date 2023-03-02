#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ch,res;
	float ans;

	printf(" Enter 2 numbers");
	scanf("%d%d",&a,&b);

	printf("1.add \n2.sub \n3.mul \n4.div");
	scanf("%d",&ch);


	switch(ch)
		 

	{
	
	case 1: res=a+b;
		printf("result of add is %d", res);
		break;
	
	case 2: res=a-b;
		printf("result of sub is %d", res);
	    break;
	

	case 3: res=a*b;
		printf("result of mul is %d", res);
		break;
	

	case 4: ans=(float)a/b;
		printf("result of div is %f", res);
		break;
	
	
	default:printf("case not matching");
	}
    getch();
}