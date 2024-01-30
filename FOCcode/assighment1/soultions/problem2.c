#include <stdio.h>

int main() {
    double heightOfTheCone;
    double radiusOfTheSphere;
    double sphereVol;
    double coneVol;
    double pi = 3.14;
    double volumeOFIceCream;
    double f = 4.00 ;
    double t = 3.00 ;

    scanf("%lf %lf", &heightOfTheCone,&radiusOfTheSphere);
    //scanf("%lf", &radiusOfTheSphere);

    if (heightOfTheCone <= 0 || radiusOfTheSphere < 0) {
        printf("Invalid input");
    } else {
        sphereVol = (f/t)*(pi)*0.5*(radiusOfTheSphere*radiusOfTheSphere*radiusOfTheSphere);
        coneVol = (1/t)*(heightOfTheCone)*(pi)*(radiusOfTheSphere)*(radiusOfTheSphere);
        volumeOFIceCream = sphereVol + coneVol;
        printf("%.2lf", volumeOFIceCream);
    }

    return 0;
}

