#include<stdio.h>

int main()
{
	int a[20],n, key, pos, i, flag=0;
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
	
	printf("Enter the element to be searched:\n");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag==1)
	{
		printf("Element found at postion %d \n",pos+1);
	}
	else
	{
		printf("Element not found");
	}
	return 0;
}
