#include <stdio.h>

int ifChanges(int *arr, int time){
    int quantity = 0;
    for (size_t i = 0; i < 3; i++)    {
        if (arr[i] == time)        {
            quantity++;
        }
    }

    return quantity;
}


int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    

    int arrive[3], leave[3];
    for (size_t i = 0; i < 3; i++)    {
        scanf("%d%d", &arrive[i], &leave[i]);
    }

    int end = leave[0];

    for (size_t i = 1; i < 3; i++)    {
        if (end < leave[i])        {
            end = leave[i];
        }
        
    }
    
    
    int presents[100] = {0}, cost = 0;
    presents[0] = 0;
    for (size_t i = 0; i <= end; i++)    {
        if (i != 0)        {
            presents[i] = presents[i - 1];
        }
    
        if(ifChanges(arrive, i))    {
            presents[i] += ifChanges(arrive, i);
            //printf("%d came in %d   presents: %d\n", ifChanges(arrive, i), i,  presents[i]);
        }

        if(ifChanges(leave, i))    {
            presents[i] -= ifChanges(leave, i);
            //printf("%d went in %d   presents: %d\n", ifChanges(leave, i), i, presents[i]);
            
        }
        
        if (presents[i] == 1)        {
            cost += a;
        }
        
        if (presents[i] == 2)        {
            cost += 2 * b;
        }

        if (presents[i] == 3)        {
            cost += 3 * c;
        }
    }

    printf("%d", cost);
    

	return 0;
}


