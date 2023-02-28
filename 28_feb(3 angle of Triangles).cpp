#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter a 3 value of triangles");
scanf("%d%d%d",&a,&b,&c);

if((a+b+c)==180)
{
	printf("triangle is formed");
}

else
{
	printf("triangle is not formed");
} 

getch();

}