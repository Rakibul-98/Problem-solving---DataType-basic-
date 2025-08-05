// https://www.codechef.com/problems/CLEARDAY

#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    if( X >= 0 && X <= 7 && Y >= 0 && Y <= 7){
        printf("%d", 7 - (X + Y));
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}