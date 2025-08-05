// https://www.codechef.com/problems/SWEETSHOP

#include <stdio.h>

int main()
{
    int X, N;
    scanf("%d %d", &X, &N);
    
    if (X >=1 && X <= 100 && N >=1 && N <= 10 && X >= 10*N) {
        printf("%d\n", (X - (N*10)) / 20);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
