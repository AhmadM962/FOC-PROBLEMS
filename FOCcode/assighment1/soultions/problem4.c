//king 
#include <stdio.h>

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if ((a < b && b < c && c < d) || (a > b && b > c && c > d)) {
        printf("Ordered");
    } else {
        printf("Not-ordered");
    }

    return 0;
}

