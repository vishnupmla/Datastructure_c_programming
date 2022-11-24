#include<stdio.h>


 int main()

{	
	int a[100],b[100],c[100],a1,a2,a3,i,j,temp,k;

	printf("enter the size of the first array");
	scanf("%d",&a1);
	printf("Enter the array elements");

	for(i=0;i<a1;i++)
	{
	scanf("%d",&a[i]);
	c[i]=a[i];
	}

	k=a1;
	printf("enter the size of the second array");
	scanf("%d",&a2);
	printf("enter the array elements");

	for(i=0;i<a2;i++)
	{
	scanf("%d",&b[i]);
	c[k]=b[i];
	k++;
	}

	a3=a1+a2;
	
	for(i=0;i<a3-1;i++)
	{
		for(j=0;j<a3-1;j++)
		{

			if(c[j]>c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}



	printf("sorted sorted array \n");
	for(i=0;i<a3;i++){
	printf("%d \n",c[i]);
	}

	

	return 0;


}
