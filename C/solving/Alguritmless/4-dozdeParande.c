#include <stdio.h>
#include <string.h>

int main(){
      int t;
      scanf("%d", &t);
      for (size_t i = 0; i < t; i++){
            int n, k;
            scanf("%d%d", n, k);
            int tabaghe[k], panjere[k];
            for (size_t j = 0; j < k; j++){
                  
                  scanf("%d%d", &tabaghe[j], panjere[j]);      
            }
            int l = 0;
            while(l < k){
            for (size_t j = 0; j < k; j++){
                  if ((tabaghe[j] == tabaghe[l] + 1) && (panjere[j] == panjere[l])){
                        printf("No");
                  }

            }
            l++;
            }


            
      }
      
      
}