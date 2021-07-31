#include <stdio.h>
#include <math.h>


int main(){
    unsigned n, x = 0, y = 0, k = 0;
    scanf("%u", &n);
    
    int a[n][n], sum = 0, points = 0;

    for (size_t i = 0; i < n; i++)    {
        for (size_t j = 0; j < n; j++)        {
            scanf("%d", &a[i][j]);
        }
        
    }
    
    int temp = n;

    for ( ; k < n / 2; k++){
    
    for ( ; y < temp; y++)    {
        sum += a[x][y];
        if (sqrt(sum) == (int) sqrt(sum) )        {
            points++;
        }
    }

    for ( ; x < temp; x++)    {
        sum += a[x][y];
        if (sqrt(sum) == (int) sqrt(sum) )        {
            points++;
        }        
    }

    while(k != y){
        sum += a[x][y];
        if (sqrt(sum) == (int) sqrt(sum) )        {
            points++;
        }
        y--;
    }

    for ( ; x != k; x--)    {
        sum += a[x][y];
        if (sqrt(sum) == (int) sqrt(sum) )        {
            points++;
        }
    }
    

    temp--;

    }

    printf("%d", points);


}
