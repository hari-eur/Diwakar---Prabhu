//simple calculator using c
#include <stdio.h>


int main()
{
    
	printf("Welcome to the calculator \n");
    
	int number1,number2;
    
	scanf("%d %d ",&number1,&number2);
    
	char operation;
    scanf("%c",&operation);
    
	switch(operation)
    
		{
   
     
		case '+' : {
				printf("%d + %d = %d\n",number1,number2,(number1+number2));
            
				break;
        }
        
		case '-' : {	
				printf("%d - %d = %d\n",number1,number2,(number1-number2));
            
				break;
        }
        
		case '*' : {
				printf("%d * %d = %d\n",number1,number2,(number1*number2));
            
				break;
        }
        
		case '/' : {
				if (number2){printf("%d / %d = %d\n",number1,number2,(number1/number2));
            
				break;}
            
				printf("Zero division error");
            
				break;
			 }
        
		default :printf("Invalid operation");
        
    
			
		}


    return 0;

}
