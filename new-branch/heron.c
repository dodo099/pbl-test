<<<<<<< HEAD
//Autor: Kinga Konieczna

#include <stdio.h>
#include <math.h>

double triSide(double ax, double ay, double bx, double by) {
    double abxSide = ax - bx;
    double abySide = ay - by;

    double abSideLength = sqrt(pow(abxSide, 2) + pow(abySide, 2));
    return abSideLength;
}

double triPeri(double abSide, double bcSide, double caSide) {
    double circumference = abSide + bcSide + caSide;

    return circumference;
}

double triArea(double ax, double ay, double bx, double by, double cx, double cy) {
    double abSide = triSide(ax, ay, bx, by);
    double bcSide = triSide(bx, by, cx, cy);
    double caSide = triSide(cx, cy, ax, ay);

    double p = triPeri(abSide, bcSide, caSide) / 2.0;
    double area = sqrt(p * (p - abSide) * (p - bcSide) * (p - caSide));

    return area;
}

int main() {
    double ax, ay, bx, by, cx, cy;
    printf("Podaj wspolrzedne punktu A (ax ay): ");
    scanf("%lf %lf", &ax, &ay);
    printf("Podaj wspolrzedne punktu B (bx by): ");
    scanf("%lf %lf", &bx, &by);
    printf("Podaj wspolrzedne punktu C (cx cy): ");
    scanf("%lf %lf", &cx, &cy);

    printf("Pole trojkata wynosi %.2lf", triArea(ax, ay, bx, by, cx, cy));

    return 0;
=======
//Autor: Kinga Konieczna

#include <stdio.h>
#include <math.h>

double triSide(double ax, double ay, double bx, double by) {
    double abxSide = ax - bx;
    double abySide = ay - by;

    double abSideLength = sqrt(pow(abxSide, 2) + pow(abySide, 2));
    return abSideLength;
}

double triPeri(double abSide, double bcSide, double caSide) {
    double circumference = abSide + bcSide + caSide;

    return circumference;
}

double triArea(double ax, double ay, double bx, double by, double cx, double cy) {
    double abSide = triSide(ax, ay, bx, by);
    double bcSide = triSide(bx, by, cx, cy);
    double caSide = triSide(cx, cy, ax, ay);

    double p = triPeri(abSide, bcSide, caSide) / 2.0;
    double area = sqrt(p * (p - abSide) * (p - bcSide) * (p - caSide));

    return area;
}

int main() {
    double ax, ay, bx, by, cx, cy;
    printf("Podaj wspolrzedne punktu A (ax ay): ");
    scanf("%lf %lf", &ax, &ay);
    printf("Podaj wspolrzedne punktu B (bx by): ");
    scanf("%lf %lf", &bx, &by);
    printf("Podaj wspolrzedne punktu C (cx cy): ");
    scanf("%lf %lf", &cx, &cy);

    printf("Pole trojkata wynosi %.2lf", triArea(ax, ay, bx, by, cx, cy));

    return 0;
>>>>>>> 94f0d9b153d989722f2b928795ebeee53931bac6
}