#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *a,i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	free(a);
}

