#include<stdio.h>
void main()
{
	int i,j,a[100],n,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+2])
			{
				t=a[j];
				a[j]=arr[j+2];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
