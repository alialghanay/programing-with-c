#include <stdio.h>

int main(void){
    int number, index;
    printf("Input Number index to be printend ");
    scanf("%d", &index);
    for(int i = 0; i <= 10; i++){
        scanf("%d", &number);
        if(i == index)
        printf("%d", number);

    }
    return 0;
    }
