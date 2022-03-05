#include <stdio.h>



int main()
{
    int n;
    printf("please enter how many integer numbers you want to enter?\n");
    scanf("%d", &n);
    int arr[n];

    // entering numbers
    for(int i = 0;i < n; i++){
        printf("\n please enter %d in the array -> \t", i);
        scanf("%d", &arr[i]);
    }

    // printing numbers
    for(int i = n - 1; i >= 0; i--){
        printf("%d \n", arr[i]);
    }

    return 0;
}
