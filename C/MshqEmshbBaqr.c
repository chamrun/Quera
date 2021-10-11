#include <stdio.h>


int main()
{
    int num1, num2, num3;
    //printf("Enter three numberse\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if ((num1 == 0) || (num2 == 0) || (num3 == 0))
    {
        printf("No");
    }
    else
    {
        if (num1 + num2 + num3 == 180)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
}