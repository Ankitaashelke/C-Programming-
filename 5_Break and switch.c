////break and switch
#include <stdio.h>

int main()
{
    char grade;
    
    
    printf("Enter your grade:\n");
    scanf("%c", &grade);
    
    
    switch(grade)
    
    {
        case 'A' :
        printf("Excellent\n");
        break;
        
        case 'B' :
        printf("Good");
        break;
        
        case 'C':
        printf("Better");
        break;
        
        case 'D' :
        printf("Need to study");
        break;
        
        default:
        printf("Invalid grade");
    }
    

    return 0;
}
