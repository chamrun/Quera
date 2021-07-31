#include <stdio.h>

int ifPrimary (unsigned int numb){
    for (size_t i = 2; i <= numb / 2; i++)    {
        if (numb % i == 0)        {
            return 1;
        }   
    }
    if(numb == 1) return 1;
    return 0;
}

unsigned int sumOfDigits(unsigned int numb){
    unsigned int sum = 0;
    while (numb / 10)    {
        sum += numb % 10;
        numb /= 10;
    }
    sum += numb % 10;

    return sum;
    
}

unsigned int sumOfPrimaryDivisors (unsigned int numb){
    unsigned int sum = 0;
    for (size_t i = 2; i <= numb / 2; i++)    {
        if (numb % i == 0 && ifPrimary(i) == 0)        {
            sum += i;
            //printf("%u\n", i);
        }
    }
    if (ifPrimary(numb) == 0)    {
        sum += numb;
    }
    
    return sum;
}

unsigned int dFun(unsigned int numb){
    unsigned int dOut = numb + sumOfPrimaryDivisors(numb) + sumOfDigits(numb);
    return dOut;
}


int main(){
    unsigned int t;
    scanf("%u", &t);
    unsigned int answers[t], n[t], nMax = 0;

    for (size_t i = 0; i < t; i++)    {
        answers[i] = 0;
        scanf("%u", &n[i]);
        if (nMax < n[i])        {
            nMax = n[i];
        }
    }
    

    for (size_t i = 1; i < nMax; i++)    {
        for (size_t j = 0; j < t; j++)        {
            if (dFun(i) == n[j])            {
                answers[j] = 1;
            }
        }
    }

    for (size_t i = 0; i < t; i++)    {
        if (answers[i] == 1)        {
            printf("Yes\n");
        }   else        {
            printf("NO\n");
        }        
    }
    

    return 0;

}