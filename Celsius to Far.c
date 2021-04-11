//Celsius to Far

#include <stdio.h>

int main()
{
    float Celsius,Far;
    
    
    printf("Celsius is \n");
    scanf("%f", &Celsius);
    
    Far= (Celsius * 9/5) + 32;
    
    printf("Far is %f", Far);

    return 0;
}



