//Solving Example

#include <stdio.h>

int main()
{
    float x,y,z,k;
    float result ;
    
    printf("Value of x is \n");
    scanf("%f", &x);
    
    printf("Value of y is\n");
    scanf("%f", &y);

    printf("Value of z is\n");
    scanf("%f", &z);

    printf("Value of k is\n");
    scanf("%f", &k);
    
    result = ((3*x) + 6-y) / (z + k);
    printf("Result is %f\n", result);


    return 0;
}

