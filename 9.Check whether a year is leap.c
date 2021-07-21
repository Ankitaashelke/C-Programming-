//Check whether it is a leap year

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a number /n");
    scanf("%d", &year);
    
    if (year%4 == 0)
    {
    printf("It is a leap year");
     }
else {
      printf("It is not a leap year");
    }
    
return 0;
}
