// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_B

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    
    if (x >= 1 && x <= 100) {
        printf("%d\n", x*x*x);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
