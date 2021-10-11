#include <stdio.h>
#include <string.h>

int main(){
      int a, b;
      scanf("%d%d", &a, &b);
      int hh = 12 - a, mm = 60 - b;
            if (hh == 12){hh = 0;}
            if (mm == 60){mm = 0;}
      printf("%.2d:%.2d", hh, mm);
      }
      