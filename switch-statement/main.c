#include <stdio.h>

int main() {
    int num1, num2;
    char choice;
    printf("***Basic Math operations***\n");
    printf("1.Add (+) \n2.Subtract (-)\n");
    printf("3.Multiply (*)\n4.Divide (/)\n");
    printf("Choose operation from(1 to 4)\n");
    printf("or form (+, -, *, /)");
    scanf(" %c", &choice);
    printf("Enter first integer number:");
    scanf("%d", &num1);
    printf("Enter second integer number:");
    scanf("%d", &num2);
    switch(choice){
    case '1':
    case '+':
        printf("%d + %d = %d", num1, num2, num1+num2);
        break;
    case '2':
    case '-':
        printf("%d - %d = %d", num1, num2, num1-num2);
        break;
    case '3':
    case '*':
        printf("%d * %d = %d", num1, num2, num1*num2);
        break;
    case '4':
    case '/':
        printf("%d / %d = %d", num1, num2, num1/num2);
        break;
    default:
        printf("%c is out of range!", choice);
    }
    return 0;
}
