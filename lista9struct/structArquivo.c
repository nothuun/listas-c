#include <stdio.h>

int main() {

    FILE *arq = fopen("C:/Users/alunos/Desktop/nothuun/lista9struct/dados_lip.txt", "r"); 
    char reading[100];

    if (arq == NULL) {

        printf("Erro ao abrir arquivo\n");

        return 1;
    }


    while (fgets(reading, sizeof(reading), arq) != NULL) {

        printf("%s\n", reading);
    }
    
    fclose(arq);

    FILE *add = fopen("C:/Users/alunos/Desktop/nothuun/lista9struct/dados_lip.txt", "a");
    char adding[100];

    if (arq == NULL) {

        printf("Erro ao abrir arquivo\n");

        return 1;
    }

    printf("\n\nInsira um texto para adicionar:\n");

    fgets(adding, sizeof(adding), stdin);
    fprintf(add, "\n%s", adding);

    printf("Texto adicionado.\n");

    fclose(add);

    return 0;
}   