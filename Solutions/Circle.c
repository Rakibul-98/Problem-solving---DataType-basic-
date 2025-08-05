// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_B

#include <stdio.h>
#include <math.h> 

int main()
{
    double r;
    scanf("%lf", &r);
    
    if (r > 0 && r < 10000) {
        double a = (double)M_PI * r * r;
        double c = (double)2 * M_PI * r;
        printf("%lf %lf\n", a, c);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
