#include <stdio.h>

int main()
{
	float firstNumb, secondNumb;
    
	char operator;
   
	for(;;)
   
		{
			printf("Enter function (+, -, *, /, p for power, r for root): ");
			scanf("%c", &operator);

			printf("Enter two operands: ");
			scanf("%lf %lf", &firstNumb, &secondNumb);
			
			switch(operator)
			{
				case '+':
    	        
					addition(firstNumb, secondNumb);
    	        
					break;
				case '-':
    	        
					subtraction(firstNumb, secondNumb);
    	        
					break;
				case '*':
    	        
					mulitplication(firstNumb, secondNumb);
    	        
					break;
				case '/':
    	        
					division(firstNumb, secondNumb);
    	        
					break;
				case 'p':
    	        
					power(firstNumb, secondNumb);
    	        
					break;
				case 'r':
    	        
					root(firstNumb, secondNumb);
    	        
					break;
			}
			printf("\n");
		} 
}
