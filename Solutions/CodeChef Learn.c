// https://www.codechef.com/problems/CCLEARN

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    if (N >=1 && N <= 100) {
        printf("%d\n", N*2);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
