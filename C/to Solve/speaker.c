#include <stdio.h>
#include <string.h>

int main(){
      char spoke[20];
      gets(spoke);
      int k = strlen(spoke);
      int i = 0;
      puts(spoke);
      int j;
      for (j = 1; i < k; j++){
            for (i = 0; i < j; i++){
                  spoke[i] = spoke[j];
            }
            puts(spoke);     
      }
}