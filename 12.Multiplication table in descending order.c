//Multiplication Table in Descending order

#include <stdio.h>

int main()
{
  int n,i;

    printf("Enter an integer \n");
    scanf("%d", &n);
    for (i=10; --i; i<=1) {
        printf(" %d * %d = %d \n", n, i, n*i);
    }

    return 0;
}
