// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_A

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a >= 1 && a <= 1000000000 && b >= 1 && b <= 1000000000) {
        int d = a / b;
        int r = a % b;
        double f = (double)a / b;

        printf("%d %d %lf\n", d, r, f);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
