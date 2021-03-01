#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,d,sum,difference;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("\nEnter value of b:");
	scanf("%d",&b);
	sum=a+b;
	if(sum>0)
	{
   		printf("sum is positive");
	}
	else
	{
		printf("sum is negative");
	}
	if (a%2==0)
	{
		printf("\na is even");
	}
	else 
	{
		printf("\na is odd");
	}
}
	/*
	printf("\nsum is %d",sum);
	printf("Enter value of c:");
	scanf("%d",&c);
	printf("Enter value of d:");
	scanf("%d",&d);
	difference=c-d;
	printf("difference is %d",difference);*/
	


