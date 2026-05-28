#include <stdio.h>
#include <string.h>

struct Endereco {

    char *logradouro;
    char *num;
    char *complemento;
    char *cidade;
    char *bairro;
    char *estado;
    char *cep;
};

int main() {

    struct Endereco end;

    char info[201];

    printf("Mande seu endereco, separando as informacoes por virgulas\n");

    fgets(info, 201, stdin);

    end.logradouro = strtok(info, " ,");
    printf("%s\n", end.logradouro);

    end.num = strtok(NULL, " ,");
    printf("%s\n", end.num);

    end.complemento = strtok(NULL, " ,");
    printf("%s\n", end.complemento);

    end.cidade = strtok(NULL, " ,");
    printf("%s\n", end.cidade);

    end.bairro = strtok(NULL, " ,");
    printf("%s\n", end.bairro);

    end.estado = strtok(NULL, " ,");
    printf("%s\n", end.estado);

    end.cep = strtok(NULL, " ,");
    printf("%s\n", end.cep);

    return 0;
}
