// https://www.codechef.com/problems/BNE_APT?

#include <stdio.h>

int main()
{
    int N, M, X, Y;
    scanf("%d %d", &N, &M);
    scanf("%d %d", &X, &Y);
    
    if (N >=0 && M <= 100 && X >=0 && Y <= 1000) {
        printf("%d\n", (N*X)+(M*Y));
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
