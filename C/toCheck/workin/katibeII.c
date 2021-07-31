#include <stdio.h>

int ifL (char table[][100], int i, int j, int k){
    int h, p;
    
    for (size_t p = 2; p < 2 * k; p++)    {
        for (h = 0; h < 2 * k; h++)
            if (table[i + h][j] != '*')        {
                return 0;
            }

            if (h == k - 1)            {
                for (p = 0; p < k; p++)                {
                    if (table[i + h][j + h] != '*')                    {
                        return 0;
                    }
                    
                }
                
            }
            
        
    }

    return 1;
    

}

int main(){
    unsigned n, m, lS = 0, myQ;
    scanf("%u%u", &n, &m);

    char cattyBe[n][m];

    for (size_t i = 0; i < n; i++)    {
        scanf("%s", &cattyBe[i]);
    }

    for (size_t i = 0; i < n; i++)    {
        for (size_t j = 0; j < m; j++)        {
            for (size_t k = 2; k <= n / 2 ; k++)            {
                for (size_t l = 0; l <= 2 * k; l++)                    {
                    if (cattyBe[i + l][j] != '*')              {
                        k = n / 2;
                        break;
                    }
                    //printf("cattyBe[%u][%u} checked!\n", i + l, j);
                    if (l == ((2 * k) - 1))                        {
                        for (size_t q = 1; q <= k; q++)                            {
                            if (cattyBe[i + l][j + q] != '*')                                {
                                k = n / 2;
                                l = m;
                                break;
                            }
                            myQ = q;
                        }
                        lS++;
                        //printf("an L was found fron [%u, %u] to [%u, %u]\n", i, j, i + l, j + myQ);
                    }      
                }
            }   
        }
    }
    printf("%u", lS);
}