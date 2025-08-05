// Q. https://www.codechef.com/problems/DOUBLERENT

#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);
    if( X >= 1 && X <= 10){
        printf("%d", X * 2);
    }
    else{
        printf("%d Invalid Rent", X);
    }
    return 0;
}