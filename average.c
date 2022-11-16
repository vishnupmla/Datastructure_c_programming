#include<stdio.h>

void main()
{
int a,b,c; 
float avg=0;
printf("Enter three numbers: \n");
scanf("%d%d%d",&a,&b,&c);

avg=(a+b+c)/3;

printf("Average of  numbers %d,%d and %d = %f ",a,b,c,avg);
}
