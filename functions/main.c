#include <stdio.h>
#include <stdbool.h>

/*
Write in C program that's:
1. take 'n' sequence of Numbers.
2. store them in array.
3. then write a function that do's the following:
    A. search for a specific number.
    B. if the number exists:
        - if yes -> print's (it is existing) & what's the adders of the number in the array.
        - if no -> print's (wrong number).

*/
bool number_searchig(int number, int array[], int arrlength);
int* adders_function(int number, int array[], int arrlength);

int main()
{
    int n, sn;
    char answer[3];
    printf("Please enter how many sequence of numbers you will enter to the array!\n");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Please enter the %d number in the array.\n", i+1);
        printf("it can be anay integer number!\n");
        scanf("%d", &arr[i]);
    }
    printf("ok... \n");
    printf("do you want to search about any number in the array to make sure it's exiting in the array?\n");
    scanf("%s", &answer);
    if(answer != "yes"){
        printf("Please Enter Integer Number to Search for ->");
        scanf("%d", &sn);
        bool result = number_searchig(sn, arr, n);
        if(result == true){
            printf("the number dose exists,\n");
            int* p = adders_function(sn, arr, n);
            if(p != NULL){
             printf("the address of the number in the array is %d\n", p);
            }else{printf("something went wrong\n");}
        }else{printf("the number dose not exists\n");}
    }
    printf("bye!...");
    return 0;
}

bool number_searchig(int number, int array[],int arrlength)
{
    for(int i=0; i < arrlength; i++){
        if(array[i] == number){
            return true;
        }
    }
    return false;
}

int* adders_function(int number, int array[], int arrlength)
{
    int* p;
    for(int i=0; i < arrlength; i++){
        if(array[i] == number){
            p = &array[i];
            return p;
        }
    }
    return NULL;
}
