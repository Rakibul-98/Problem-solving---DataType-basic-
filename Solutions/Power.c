// https://atcoder.jp/contests/abc283/tasks/abc283_a?lang=en

#include <stdio.h>
#include <math.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    
    if (A >= 1 && B >= 1 && B <= 9) {
        printf("%.0lf\n", pow(A,B) );
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}