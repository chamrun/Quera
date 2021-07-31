#include <stdio.h>

int main(){
    int n;
    scanf("%d\n", &n);
    //printf("n is: %d\n", n);

    char goal, firMove, secMove;
    scanf("%c\n", &goal);

    for (size_t i = 0; i < n; i++)    {
        printf("%dth MOVE from: ", i);
        scanf("%c ", &firMove);
        printf("fir was %c\n", firMove);
        printf("%dth MOVE to: ", i);
        scanf("%c\n", &secMove);
        printf("sec was %c\n", secMove);

        if (firMove == goal){
            goal = secMove;
        }

        if (secMove == goal){
            goal = firMove;
        }
    }

    printf("%c", goal);
    
    
}