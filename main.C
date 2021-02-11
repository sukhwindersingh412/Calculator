int main()
{
	double firstNumb, secondNumb;
    
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
    	        
					add(firstNumb, secondNumb);
    	        
					break;
				case '-':
    	        
					sub(firstNumb, secondNumb);
    	        
					break;
				case '*':
    	        
					mult(firstNumb, secondNumb);
    	        
					break;
				case '/':
    	        
					divide(firstNumb, secondNumb);
    	        
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