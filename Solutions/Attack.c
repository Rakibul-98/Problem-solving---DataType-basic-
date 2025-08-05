// https://atcoder.jp/contests/abc302/tasks/abc302_a?lang=en

#include <stdio.h>

int main()
{
    long long A, B;
    scanf("%lld %lld", &A, &B);
    
    if (A >= 1 && B >= 1 && A <= 1000000000000000000 && B <= 1000000000000000000) {
        printf("%lld\n", (A+B-1) / B);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}