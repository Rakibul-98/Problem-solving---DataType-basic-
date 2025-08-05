// https://atcoder.jp/contests/abc320/tasks/abc320_a?lang=en

#include <stdio.h>
#include <math.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    
    if (A >=2 && B >= A && B <= 9) {
        printf("%.0lf \n", (pow(A,B) + pow(B,A)));
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}