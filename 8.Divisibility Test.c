//Check whether a gven number is divisble by 5
#include <stdio.h>

int main()
{ 
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test returns: %d\n", num%5);
    return 0;
}
