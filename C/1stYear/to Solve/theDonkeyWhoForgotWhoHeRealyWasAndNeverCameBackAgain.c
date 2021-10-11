#include <stdio.h>

int main(){
    int t, a, b, arAr, maaMaa;
    scanf("%d%d%d", &t, &a, &b);
    int completedPlays = (t) / (a + b + 2);
    int timeBaaghee = t % (a + b + 2);
    arAr = maaMaa = completedPlays;
    if ( timeBaaghee >= 1)
    {
      arAr++;  
    }
    if ( timeBaaghee >= (2+a))
    {
        maaMaa++;
    }
    printf("%d %d",arAr, maaMaa);
    
    
}