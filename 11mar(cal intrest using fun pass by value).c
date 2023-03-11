#include<stdio.h>
#include<conio.h>
float SI(float p,float n,float r);
float SI(float p,float n,float r)

{
	float si;
	si=(p*n*r)/100;
	return si;   //for display si
}
void main()
{
	float p,n,r;
	float ans;
	printf("\n Enter p,n,r");
	scanf("%f%f%f",&p,&n,&r);

	ans=SI(p,n,r);   //ans is stored
	printf("simp INT is %f",ans);

	getch();
}