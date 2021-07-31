#include <stdio.h>




int main(){
    unsigned int n;
    scanf("%u", &n);

    char pass[n], numbs[n][9];
    //scanf("&s", pass);
    gets(pass);

    unsigned int motions[n];


    for (size_t i = 0; i < n; i++)    {
        //scanf("&s", numbs[i]);
        gets(numbs[i]);
    }

    for (size_t i = 0; i < n; i++){
        for (size_t j = 0; j < n; j++)        {
            if (numbs[i][j] == pass[i])            {
                motions[i] = j;
            }
        }
    }

    unsigned sumOfMotions = 0;

    for (size_t i = 0; i < n; i++)    {
        sumOfMotions += motions[i];
    }

    printf("%u", sumOfMotions);
    
    


    
}
