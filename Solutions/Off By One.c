// https://www.codechef.com/problems/OFFBY1

#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    
    if (A >= 1 && B >= 1 && B <= 50) {
        printf("%d\n", (A+B)*10 + 1 );
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
