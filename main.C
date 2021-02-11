#include <stdio.h>
#include "addition.c"
#include "subtraction.c"
#include "multiplication.c"
#include "division.c"
#include "powers.c"
#include "root.c"

int main()
{
	float firstNumb, secondNumb;
    
	char op;
   
	for(;;)
   
		{
			printf("Enter function (+, -, *, /, p for power, r for root): ");
			scanf("%c", &op);

			printf("Enter two operands: ");
			scanf("%f %f", &firstNumb, &secondNumb);
			
			switch(op)
			{
				case '+':
    	        			printf("%f %c %f = ", firstNumb, op, secondNumb);
					addition(firstNumb, secondNumb);
					break;
				case '-':
					printf("%f %c %f = ", firstNumb, op, secondNumb);
					subtraction(firstNumb, secondNumb)
					break;
				case '*':
    	        			printf("%f %c %f = ", firstNumb, op, secondNumb);
					multiplication(firstNumb, secondNumb);
					break;
				case '/':
					printf("%f %c %f = ", firstNumb, op, secondNumb);
					division(firstNumb, secondNumb);
					break;
				case 'p':
					printf("%f %c %f = ", firstNumb, op, secondNumb);
					printf("The second Number will be converted to a integer\n");
					int myInt;
					myInt = (int)secondNumb;
					powers(firstNumb, myInt);
					break;
				case 'r':
					printf("%f %c %f = ", firstNumb, op, secondNumb);
					root(firstNumb, secondNumb);
					break;
			}
			printf("\n");
		} 
}
