#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,t,l;
	char a[]="bhogaditopper",b[100];
	l=strlen(a);
	for(i=1;i<=l;i++)
	{
		for(j=0;j<=l-i;j++)
		{
			for(k=j,t=0;t<i;k++)
			{
				b[t++]=a[k];
			}
			b[t]='\0';
			printf("%s\n",b);
		}
	}
	return 0;
}
