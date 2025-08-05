// Problem: https://www.codechef.com/problems/PHONEYR

#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);
    if( X >= 1973 && X <= 2024 ){
        printf("K%02d", X % 100);
    }
    else{
        printf("'%d' Invalid Year", X);
    }
    return 0;
}