/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int  num;
    printf("Count set bits");
    scanf("%d",&num);
    int ans=0;
    while(num){
        if (num&1!=0){
            ans++;
        }
        num=num>>1;
    }
    printf("Answer : %d",ans);
    return 0;
}
