// https://www.codechef.com/problems/FOODCOST

#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    if (X >= 1 && Y > X && Y <= 1000) {
        printf("%d\n", (X*6)+Y);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
