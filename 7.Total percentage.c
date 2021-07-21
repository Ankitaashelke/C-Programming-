//Total percentage 
#include <stdio.h>

int main()
{
    int phy, chem, maths;
    float total;
    
    printf("Marks for phy \n");
    scanf("%d", &phy);
    
     printf("Marks for chem \n");
    scanf("%d", &chem);
    
     printf("Marks for maths \n");
    scanf("%d", &maths);
    
    total = (phy+chem+maths)/3 ;
    
    if ((total<40) || phy<33 || chem<33 || maths<33){
        printf("Your total percentage is %f\n and you are fail\n", total);
    }
    else {
        printf("Your total percentage is %f\n and you are pass\n", total);
    }

    return 0;
}

