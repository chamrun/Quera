#include <stdio.h>
//#include <ctype.h>

int isAllOne(char *barcode){
    for (size_t i = 0; i < 3; i++)    {
        if (barcode[i] == '0')        {
            return 0;
        }
    }
    
    return 1;
    
}

int is_one_o_one(char *barcode){
    if ((barcode[0] == '0') || (barcode[2] == '0'))    {
        return 0;
    }
    
    if (barcode[1] == '1')    {
        return 0;
    }
    
    return 1;
    
}

int main(){
    char barcode[3], barcodeII[3];
    gets(barcode);
    gets(barcodeII);
    //printf("%d\n", is_one_o_one(barcode));
    int twes = 0;

    /*  Line 1  */

    for (size_t i = 0; i < ; i++)
    {
        /* code */
    }
    
    
    if (!is_one_o_one(barcode) || !isAllOne(barcodeII))    {
        printf("0");
        return 0;
    }
    
    
}