#include <stdio.h>




int main(){
    int n, s, t, start, end, mission = 0;
    //printf("n: ");
    scanf("%d\n", &n);
    char homes[n];
    
    //printf("homes: ");
    gets(homes);

    //printf("s & t: ");
    scanf("%d%d", &s, &t);

    if (s < t)    {
        start = s;
        end = t;
    }   else    {
        start = t;
        end = s;
    }

    start--;
    end--;
    

    for (size_t i = start; i <= end; i++)    {
        while (homes[i] == 'H')        { //printf("%d was H\n", i);

            if (homes[i + 1] == 'P')            {   //printf("%u will be P\n", i + 1);
                mission++;
             //   printf("an H till %u\n", i);
            }

            i++;
        }
    }
    //printf("%s\n", homes);

    printf("%d", mission);
    

    


    
}
