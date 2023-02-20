#include<stdio.h>

int A[5]={1,0,0,1,1},B[5]={0,1,1,1,0},U[5]={1,2,3,4,5},AnB[5],AuB[5],diffA[5],diffB[5],complA[5],complB[5],i;

void main()
{
    printf("\n The Universal set= {");
    for(i=0;i<5;++i)
    {
        printf("%d,",U[i]); 
       
    }
    printf("} \n");

//------------------------------------------------

    printf("\n Set A = {");
    for ( i = 0; i < 5; i++)
    {
        /* code */
        if(A[i] == 1)
        printf("%d, ",U[i]);
    }
    printf("}\n");

//-------------------------------------------------

    printf("\n Set B = {");
    for ( i = 0; i < 5; i++)
    {
        /* code */
        if(B[i] == 1)
        printf("%d, ",U[i]);
    }
    printf("}\n");
    printf("\n\n###################################\n\n");
//-------------------------------------------------
    printf("\n Bit representation AuB = {");
    for ( i = 0; i < 5; i++)
    {
        AuB[i] = A[i] | B[i];
        printf("%d,", AuB[i]);
    }
    printf("} \n");

//-------------------------------------------------
    printf("\n Set AuB = {");
    for ( i = 0; i < 5; i++)
    {
        if(AuB[i] == 1)
        printf("%d,", U[i]);
    }
    printf("} \n");

//-------------------------------------------------
    printf("\n Bit representation AnB = {");
    for ( i = 0; i < 5; i++)
    {
        AnB[i] = A[i] & B[i];
        printf("%d,", AnB[i]);
    }
    printf("} \n");

//-------------------------------------------------
    printf("\n Set AnB = {");
    for ( i = 0; i < 5; i++)
    {
        if(AnB[i] == 1)
        printf("%d,", U[i]);
    }
    printf("} \n");
    printf("\n\n########################################\n\n");
//--------------------------------------------------

    printf("\n Complement A in Bit representation 1-{A} = {");
    for ( i = 0; i < 5; i++)
    {
        /* code */
        complA[i] = 1-A[i];
        printf("%d, ", complA[i]);
    }
    printf("} \n");

    printf("\n A complement = {");
    for ( i = 0; i < 5; i++)
    {
        /* code */
        if(complA[i] == 1)
        printf("%d, ",U[i]);
    }
    printf("} \n");

//------------------------------------------------------

    printf("\n Complement B in Bit representation 1-{B} = {");
    for ( i = 0; i < 5; i++)
    {
        /* code */
        complB[i] = 1-B[i];
        printf("%d, ", complB[i]);
    }
    printf("} \n");

    printf("\n B complement = {");
    for ( i = 0; i < 5; i++)
    {
        /* code */
        if(complB[i] == 1)
        printf("%d, ",U[i]);
    }
    printf("} \n");
    printf("\n\n########################################\n\n");

//-----------------------------------------
    printf("\n Difference of A in bit representation = {");
    for ( i = 0; i < 5; i++)
    {
        /* code */
        diffA[i] = A[i] & complB[i];
        printf("%d, ",diffA[i]);
    }
    printf("} \n");


    printf("\n A-B = {");
    for ( i = 0; i < 5; i++)
    {
        /* code */
        if(diffA[i]==1)
        printf("%d, ",U[i]);
    }
    printf("} \n");

//-----------------------------------------
    printf("\n Difference of B in bit representation = {");
    for ( i = 0; i < 5; i++)
    {
        /* code */
        diffB[i] = B[i] & complA[i];
        printf("%d, ",diffB[i]);
    }
    printf("} \n");


    printf("\n B-A = {");
    for ( i = 0; i < 5; i++)
    {
        /* code */
        if(diffB[i]==1)
        printf("%d, ",U[i]);
    }
    printf("} \n");
    printf("\n\n########################################\n\n");
  
}