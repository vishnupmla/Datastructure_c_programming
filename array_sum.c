#include<stdio.h>

int main()
{
	int a[20],n,i,sum=0;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the array elements:\n ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	
	printf("Sum of array elements = %d \n",sum);
	
	return 0;
}
