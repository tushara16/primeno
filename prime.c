#include<stdio.h>
#include<conio.h>
int primeno(int,int);
main()
{
	int num,prime;
	printf("enter a number:");
	scanf("%d",&num);
	if(num==0||num==1)
	{
		printf("not a prime number");
	}
	else
	{
		prime=primeno(num,num/2);
		if(prime==1)
		printf("\n %d is a prime number",num);
		else
		printf("\n %d is not a prime number",num);
	}
        return 0;
}
int primeno(int num,int i)
{
	if(i==1)
	{
		return 1;
	}
	else
	{
		if(num%i==0)
		return 0;
		else
		primeno(num,i-1);
	}
}
