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

// Initialize the following arrays:

// A: a binary array representing set A
// B: a binary array representing set B
// U: a universal set containing all the elements
// AnB: an empty binary array for the intersection of A and B
// AuB: an empty binary array for the union of A and B
// diffA: an empty binary array for the difference between A and B
// diffB: an empty binary array for the difference between B and A
// complA: an empty binary array for the complement of A in the universal set U
// complB: an empty binary array for the complement of B in the universal set U
// Print the universal set U.

// Print set A by iterating through the elements of A and printing out the corresponding element in the universal set U if the binary value of that element in A is 1.

// Print set B by iterating through the elements of B and printing out the corresponding element in the universal set U if the binary value of that element in B is 1.

// Compute the union of A and B by iterating through the elements of A and B simultaneously and performing a bitwise OR operation between the binary values of the corresponding elements. Store the result in the array AuB.

// Print the bit representation of AuB.

// Print the set AuB by iterating through the elements of AuB and printing out the corresponding element in the universal set U if the binary value of that element in AuB is 1.

// Compute the intersection of A and B by iterating through the elements of A and B simultaneously and performing a bitwise AND operation between the binary values of the corresponding elements. Store the result in the array AnB.

// Print the bit representation of AnB.

// Print the set AnB by iterating through the elements of AnB and printing out the corresponding element in the universal set U if the binary value of that element in AnB is 1.

// Compute the complement of A in the universal set U by iterating through the elements of A and performing a bitwise NOT operation on the binary value of each element. Store the result in the array complA.

// Print the bit representation of the complement of A.

// Print the set complement of A by iterating through the elements of complA and printing out the corresponding element in the universal set U if the binary value of that element in complA is 1.

// Compute the complement of B in the universal set U by iterating through the elements of B and performing a bitwise NOT operation on the binary value of each element. Store the result in the array complB.

// Print the bit representation of the complement of B.

// Print the set complement of B by iterating through the elements of complB and printing out the corresponding element in the universal set U if the binary value of that element in complB is 1.

// Compute the difference between A and B by iterating through the elements of A and B simultaneously and performing a bitwise AND operation between the binary value of the corresponding elements in A and the complement of the corresponding elements in B. Store the result in the array diffA.

// Print the bit representation of the difference between A and B.

// Print the set difference A - B by iterating through the elements of diffA and printing out the corresponding element in the universal set U if the binary value of that element in diffA is 1.

// Compute the difference between B and A by iterating through the elements of B and A simultaneously and performing a bitwise AND operation between the binary value of the corresponding elements in B and the complement of the corresponding