#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number:");
	scanf("%d",&n);
	printf("odd series:");
	for(i=1;i<=n;i+=2)
	{
		printf("%d",i);
	}
	return 0;
}
