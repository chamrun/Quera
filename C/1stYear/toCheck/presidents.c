#include <stdio.h>
#include <string.h>

int sumArray(int array[], int n){
    int sum = 0;
    for (size_t i = 0; i < n; i++)    {
        sum += array[i];
    }

    return sum;  
}


int main(){
    int n, k, j = 0, stopper = 0;
    scanf("%d%d", &n, &k);

    int person[n];

    for (size_t i = 0; i < n; i++)    {
        person[i] = 1;
    }
    

    while (1 < sumArray(person, n)){ 
        //printf("here?\n");
        //stopper++; if (stopper >= 100) { printf("!!!");     return 0;}

        


        for (size_t i = 0; i < n; i++)        {

            if (person[i] == 1)            {
                if (j == 0)                {
                    person[i] = 0;
                    j = k;
                }
                else {
                    j--;
                }
            }
        }

/*
    for (size_t i = 0; i < n; i++)        {
            printf("%d ", person[i]);
        }
        printf("\n");

*/    }

    for (size_t i = 0; i < n; i++)        {
        if (person[i] == 1)            {
            printf("%d", i);
        }
        
    }
    
}