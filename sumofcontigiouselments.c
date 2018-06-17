#include<stdio.h>

int main()
{
	int i,j,k,t,sum,n;
	int a[100];
	printf("enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			sum=0;
			for(k=j,t=0;t<i;k++,t++)
			{
				sum=sum+a[k];
			}
			
			printf("sum of length %d pair elements is:%d\n",i,sum);
		}
	}
	return 0;
}
