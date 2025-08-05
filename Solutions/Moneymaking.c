// https://www.codechef.com/problems/NUGGET

#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    if (X >=0 && Y <= 10 && Y >=0 && X <= 10) {
        printf("%d\n", (X*5000)+(Y*9800));
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
