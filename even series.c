#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number:");
	scanf("%d",&n);
	printf("even number series:");
	for(i=2;i<=n;i+=2)
	{
		printf("%d",i);
	}
	return 0;
}
