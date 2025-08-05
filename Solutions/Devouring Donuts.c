// https://www.codechef.com/problems/DEVDON

#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    if (X >=1 && X <= 10 && Y >=200 && Y <= 300) {
        printf("%d\n", X * Y);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
