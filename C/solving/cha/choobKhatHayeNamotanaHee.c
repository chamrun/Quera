#include <stdio.h>

int main(){
    unsigned long long int n, m, a, b, tableMin, eraserMax;

    scanf("%llu%llu%llu%llu", &n, &m, &a, &b);

    if (m < n)    {
        tableMin = m;
        
    }
    else{
        tableMin = n;
    }
    
    if (a < b)    {
        eraserMax = b;
        
    }
    else{
        eraserMax = a;
    }

    double shortestWay;

    shortestWay =  (float) tableMin / eraserMax;

    if ( (int) shortestWay != shortestWay)    {
        shortestWay = (int) shortestWay + 1;
    }
    


    printf("%.0lf", shortestWay);

    
}