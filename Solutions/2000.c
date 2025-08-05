// https://www.codechef.com/problems/RIP2000

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    if (N >= 1 && N <= 100) {
        printf("%d\n", N*4);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
