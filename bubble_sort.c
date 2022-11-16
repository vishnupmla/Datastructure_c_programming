#include<stdio.h>

int main()
{
	int a[20],n, j, temp, i;
	printf("Enter the range: ");
	scanf("%d",&n);
	printf("Enter the array elements: \n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=0;j<n-1;j++)
	 		{
	 			if(a[j]>a[j+1])
	 			{
	 				temp=a[j];
	 				a[j]=a[j+1];
	 				a[j+1]=temp;
	 			}
	 		}
	 }
	 
	 printf("Sorted array is: \n");
	 for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	 
}
