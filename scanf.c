#include <stdio.h>

int main(void) {

    //we use scanf to scan formatted input from the user
    int number1, number2, result;
    printf("por favor digite 2 numeros para fazer a soma\n");
    scanf("%d%d", &number1, &number2);
    result = number1 + number2;
    printf("%d",result);
    //printf("O resultado da soma eh: %d\n", result);
    return 0;
}