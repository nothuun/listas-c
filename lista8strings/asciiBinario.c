#include <stdio.h>
#include <string.h>

int main() {

    char userInput[51];

    printf("Digite uma string qualquer:");

    fgets(userInput, 51, stdin);

    int distReal = strlen(userInput) - 1;

    // TRANSFORMAR EM BINÁRIO = O Shift desloca o bit atual até o bit menos significante para comparar com 1

    for (int i = 0; i < distReal; i++) {

        for (int bit = 8; bit > 0; bit--) {

            int val = (userInput[i] >> bit) & 1;
            printf("%d", val);
        }

        printf(" ");
    }
}