#include <stdio.h>
#include <string.h>

struct Endereco {

    char logradouro[51];
    char num[6];
    char complemento[21];
    char cidade[21];
    char bairro[21];
    char estado[21];
    char CEP[9];
    
};

int main() {

    char info[201];

    printf("Mande seu endereco, separando as informacoes por virgulas");

    fgets(info, 201, stdin);

    char *token = strtok(info, ",");
}