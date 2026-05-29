#include <stdio.h>

struct Books {

    char id[4];
    char title[22];
    char genre[22];
    int pageQuant;
    int loanDays;
} books[7];
int main() {

    float fine = 1.2;
    float fineTotal = 0;

    int daysLim = 14;

    int arrSize = sizeof(books) / sizeof(books[0]);

    for (int i = 0; i < arrSize; i++) {

        printf("\nID: ");
        scanf("%s", books[i].id);

        getchar();
        printf("\nTitulo: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);

        printf("\nGenero: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);

        printf("\nQuantidade de Paginas: ");
        scanf("%d", &books[i].pageQuant);

        printf("\nDias Emprestados: ");
        scanf("%d", &books[i].loanDays);
        printf("--------------------\n");

        if (books[i].loanDays > daysLim) {

            int daysPastLim = books[i].loanDays - daysLim;
            
            fineTotal = daysPastLim * fine;

            printf("Total da Multa: %.2f\n--------------------\n", fineTotal);
        }
    }
}