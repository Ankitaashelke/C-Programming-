//Lower case 
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the Character\n");
    scanf("%C", &ch);
    
    if (ch >= 'A' && ch <='Z')
    {
    printf("CHARACTER IS UPPERCASE");
}
    else if (ch >= 'a' && ch <='z')
    {
    printf("CHARACTER IS LOWERCASE");
    }
       else {
       printf("THIS IS NOT A CHARACTER");
       }

    return 0;
}

