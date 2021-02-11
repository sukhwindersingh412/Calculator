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
			scanf("%lf %lf", &firstNumb, &secondNumb);
			
			switch(op)
			{
				case '+':
    	        			printf("%f %c %f= %f", firstNumb, op, socndNumb, addition(firstNumb, secondNumb));
					break;
				case '-':
					printf("%f %c %f= %f", firstNumb, op, socndNumb, subtraction(firstNumb, secondNumb));
					break
				case '*':
    	        			printf("%f %c %f= %f", firstNumb, op, socndNumb, multiplication(firstNumb, secondNumb));
					break;
				case '/':
					printf("%f %c %f= %f", firstNumb, op, socndNumb, division(firstNumb, secondNumb));
					break;
				case 'p':
					printf("%f %c %f= %f", firstNumb, op, socndNumb, powers(firstNumb, secondNumb));
					break;
				case 'r':
					printf("%f %c %f= %f", firstNumb, op, socndNumb, root(firstNumb, secondNumb));
					break;
			}
			printf("\n");
		} 
}
