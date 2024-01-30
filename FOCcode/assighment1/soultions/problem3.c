#include <stdio.h>

int main() {
    double xinput_one, yinput_one;

    scanf("%lf", &xinput_one);

    if (-10 <= xinput_one && xinput_one < -5) {
        yinput_one = xinput_one * xinput_one *xinput_one + 1;
    } else if (-5 <= xinput_one && xinput_one < 0) {
        yinput_one = 3 * xinput_one + 1;
    } else {
        yinput_one = 2 * xinput_one * xinput_one + 4;
    }

    printf("%.2lf", yinput_one);

    return 0;
}

