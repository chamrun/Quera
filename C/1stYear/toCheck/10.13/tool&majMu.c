#include <stdio.h>


int main(){
    unsigned int m, s;
    scanf("%u%u", &m, &s);

    if (s == 0 || m * 9 < s)    {
        printf("-1 -1");
        return 0;
    }

    //char smalestNumb[m];
    char bigestNumb[m];
    //bigestNumb[0] = '0';

    for (size_t i = 0; i < m; i++)    {
        if (8 < s)        {
            bigestNumb[i] = '9';
            s -= 9;
        }
        else        {
            bigestNumb[i] = s;
            for (; i < m; i++)            {
                bigestNumb[i] = 0;
            }
            
        }

        printf("%s", bigestNumb);
        
        
        


    }
    
    
    
        
    
}