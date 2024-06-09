#include<stdio.h>
int main()
{
	int a[20],i,j,n,temp;
	printf("Enter limit::");
	scanf("%d",&n);
	printf("\nEnter numbers::");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	printf("\nEntered Arrays is::");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nAfter sorting array is::\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");

}


