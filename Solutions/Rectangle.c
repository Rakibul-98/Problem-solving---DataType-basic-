// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_C

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a >=1 && b <= 100 && b >= 1 && b <= 100) {
        int area = a*b;
        int per = (a+b)*2;
        printf("%d %d\n", area, per);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}