/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Printing power of two by bit manipulation\n");
    int number;
    printf("Enter the number to e raised \n");
    scanf("%d",&number);
    int answer=2<<number-1;
    printf("The answer is %d",answer);
    return 0;
}
