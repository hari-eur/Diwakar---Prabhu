/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[5][5]={0};
    for (int i=0;i<5;i++){
        for (int j=0;j<=i;j++){
            if (j==0 || j==i){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
            }
            
        }
  }
  for (int i=0;i<5;i++){
      for (int j=0;j<=i;j++){
          printf("%d",arr[i][j]);
          
      }
      printf("\n");
  }
}
