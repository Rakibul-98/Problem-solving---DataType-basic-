// https://atcoder.jp/contests/abc235/tasks/abc235_a?lang=en

#include <stdio.h>

int main()
{
    int xyz;
    scanf("%d", &xyz);
    int a = xyz / 100;
    int b = (xyz/10) % 10;
    int c = xyz % 10;
    
    if (a > 0 && b > 0 && c > 0) {
        int abc = a*100+b*10+c;
        int bca = b*100+c*10+a;
        int cab = c*100+a*10+b;
        printf("%d\n", abc + bca + cab);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}