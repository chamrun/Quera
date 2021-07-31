#include <stdio.h>

int ifPrimary (int numb){
    for (size_t i = 2; i <= numb / 2; i++)    {
        if (numb % i == 0)        {
            return 1;
        }   
    }
    if(numb == 1) return 1;
    return 0;
}

int main(){
    
    
    
}