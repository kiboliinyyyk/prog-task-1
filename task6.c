#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    if (scanf("%d %d %d %d", &x1, &y1, &x2, &y2) != 4) return 0;

    double dx = x2 - x1;
    double dy = y2 - y1;
    double length = sqrt(dx * dx + dy * dy);

    printf("%.6f\n", length);

    return 0;
}