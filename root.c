#include <math.h>

float root(float x, float y){
    printf("%.2f ^ 1.00/%.2f = %.2f \n", x,y, pow(x, 1.0/y));
    return pow(x, 1.0/y); 
}
