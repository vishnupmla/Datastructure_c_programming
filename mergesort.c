#include<stdio.h>
 void main()
{
int i,j,k,a1[100],a2[100],a3[100],m,n,l;

printf("Enter the size of first array");
scanf("%d",&m);
printf("Enter the elements of first array");
for(i=0;i<m;i++)
scanf("%d",&a1[i]);

printf("Enter the size of second array");
scanf("%d",&n);
printf("Enter the elements of second array");
for(i=0;i<n;i++)
scanf("%d",&a2[i]);

l=m+n;
i=0;
j=0;
k=0;
while(i<m && j<n)
{
	if(a1[i]<a2[j])
	{
		a3[k]=a1[i];
		i++;
	}
	else
	{
		a3[k]=a2[j];
		j++;
	}
	k++;
}

if(i>=m)
{
	while(j<n)
	{
		a3[k]=a2[j];
		j++;
		k++;
	}

}

if(j>=n)
{
	while(i<m)
	{
		a3[k]=a1[i];
		i++;
		k++;
	}
}

printf("sorted array is: \n");
for(k=0;k<l;k++)
printf("%d \n",a3[k]);


}
