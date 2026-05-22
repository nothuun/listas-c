#include <stdio.h>
#include <string.h>

int main() {

    char userInput[51];
    int quantEspaco = 0;

    printf("Digite uma string qualquer:\n");
    fgets(userInput, 51, stdin);

    //ASCII de um espaço = 32, ou seja, o valor do caractere e seu sucessor devem ser ambos 32 para ser um espaço duplo

    int distFinal = strlen(userInput) - 1;

    for (int i = 0; i < distFinal; i++) {

        if (userInput[i] == 32 && userInput[i+1] == 32) {

            quantEspaco++;
        }
    }

    printf("Quantidade de espacos duplos: %d\n", quantEspaco);
}