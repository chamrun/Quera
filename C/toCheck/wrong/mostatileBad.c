#include <stdio.h>

int main( ) {
    int n, a, b, c, triS = 0;
    scanf("%d", &n);

    if (n % 2 == 0) {a = 2;}
        else {a = 1;}
    b = c = (n - a) / 2;
    int cMin = c;
    if (a > cMin) { printf("%d", triS); return 0;}
    triS++;
    float x;
    x = n;
    while (a <= cMin){
        a++;
        if (((n - a) % 2) == 0 ) { b = c = ((n - a) / 2);}
        if (((n - a) % 2) == 1 ) { b = ((x - a) / 2) + 0.5; c = ((x - a) / 2) - 0.5;}
        if ( c < cMin) { cMin = c;}
        if (a > cMin) { printf("%d", triS); return 0;}
        triS++;
        while (a > b - c + 2) {
            b++;
            c--;
            if ( c < cMin) { cMin = c;}
            if (a >= cMin) { printf("%d", triS);    return 0;}
            triS++;
        }
    }
}
