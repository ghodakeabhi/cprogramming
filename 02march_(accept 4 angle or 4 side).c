#include<stdio.h>
#include<conio.h>
void main()

{

	int a,b,c,d;
	int w,x,y,z;
 
	printf("Enter a 4 angles");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	printf("Enter a 4 side");
	scanf("%d%d%d%d",&w,&x,&y,&z);

	if(a==90)
	{
		if(b==90)
		{
			if(c==90)
			{
				if(d==90)
				{
					if(w==x && x==y && y==z && z==w)
					{
						printf("sqare is formed");
					}
					else
						printf("sqare is not formed");
				}
				else
					printf("square is not formed");
			}
			else
				printf("square is not formed");
		}
		else
			printf("square is not formed");
	}
	else
		printf("square is not formed");

	getch();



}