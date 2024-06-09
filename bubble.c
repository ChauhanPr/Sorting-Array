#include<stdio.h>
int main()
{
	int i,j,n,k,temp,a[50];
	printf("\nEnter limit::");
	scanf("%d",&n);
	printf("\nEnter elements::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nUnsorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		printf("\nArray after pass %d:\n",i+1);
		for(k=0;k<n;k++)
		{
			printf("%d ",a[k]);
		}
	}
	printf("\nSorted Array is ::\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
