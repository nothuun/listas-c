#include <stdio.h>

struct Funcionario {

    char id[4];
    char nome[36];
    char cargo[12];
    float salario;
    int anosServico;
};

int main() {

    struct Funcionario func[7];
    int sizeFunc = sizeof(func) / sizeof(func[0]);

    for (int i = 0; i < sizeFunc; i++) {

        printf("\nID: ");
        scanf("%s", func[i].id);

        getchar();
        printf("\nNome: ");
        fgets(func[i].nome, sizeof(func[i].nome), stdin);

        printf("\nCargo: ");
        fgets(func[i].cargo, sizeof(func[i].cargo), stdin);

        printf("\nSalario: ");
        scanf("%f", &func[i].salario);

        printf("\nAnos de Servico: ");
        scanf("%d", &func[i].anosServico);
        printf("--------------------\n");
    }
    
    int totalFunc = 7;
    float maiorSalario = 0, sumSalario = 0;
    float aumento = 0.1;

    for (int i = 0; i < sizeFunc; i++) {

        if (func[i].salario > maiorSalario) {

            maiorSalario = func[i].salario;
        }

        if (func[i].anosServico > 5) {

            func[i].salario += func[i].salario * aumento;
        }

        sumSalario += func[i].salario;

        printf("ID: %s\nSalario:%.2f\n\n", func[i].id, func[i].salario);
    }

    float medSalarial = sumSalario / totalFunc;
    printf("Media Salarial: %.2f\n", medSalarial);

    return 0;
}