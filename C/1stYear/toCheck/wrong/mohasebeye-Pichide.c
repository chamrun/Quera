#include <stdio.h>
#include <math.h>

void main (){
    unsigned int a, x, n, k, sum = 0, te;
    scanf("%u%u%u", &a, &x, &n);

    for (k = 0; k <= n; k++)    {
        sum += pow (k, x) * pow(n - k, a);
        te = pow (x, k) * pow(a, n - k);
    printf("x: %u//k: %u//a: %u//n - k: %u\nlast; %u\n\n", x, k, a, n - k, te);
    }

    printf("%u", sum);
    

}