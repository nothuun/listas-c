#include <stdio.h>
#include <string.h>

struct Hospital {

    char id[4];
    char name[36];
    char role[18];
    char sector[18];
    char ramal[14];
} medics[7];

void selectRole(struct Hospital *arr, int num, int index){

    if (num == 1) {

        strcpy(arr[index].role, "Medico"); 
    }

    else if (num == 2) {

        strcpy(arr[index].role, "Enfermeiro"); 
    }

    else if (num == 3) {

        strcpy(arr[index].role, "Fisioterapeuta"); 
    }

    else {

        printf("\nNumero Invalido!");
    }
}

void selectSector(struct Hospital *arr, int num, int index){

    if (num == 1) {

        strcpy(arr[index].role, "Obstetricia"); 
    }

    else if (num == 2) {

        strcpy(arr[index].role, "Pediatria"); 
    }

    else if (num == 3) {

        strcpy(arr[index].role, "Geriatria"); 
    }

    else {

        printf("\nNumero Invalido!");
    }
}

int main() {

    int sizeArr = sizeof(medics) / sizeof(medics[0]);

    for (int i = 0; i < 3; i++) {

        printf("ID: ");
        scanf("%s", medics[i].id);

        getchar();
        printf("\nNome: ");
        fgets(medics[i].name, sizeof(medics[i].name), stdin);
        
        int numRole = 0;
        printf("\nCargo:\n(1 - Medico)\n(2 - Enfermeiro)\n(3 - Fisioterapia)\n\nSelecione o numero respectivo: ");
        scanf("%d", &numRole);

        selectRole(medics, numRole, i);

        int numSector = 0;
        printf("\nSetor:\n(1 - Obstetricia)\n(2 - Pediatria)\n(3 - Geriatria)\n\nSelecione o numero respectivo: ");
        scanf("%d", &numSector);

        selectSector(medics, numSector, i);

        printf("\nRamal: ");
        getchar();
        fgets(medics[i].ramal, sizeof(medics[i].ramal), stdin);
        printf("\n-----------------------\n\n");
    }

    char searchInput[24];
    int numInput = 0;

    printf("Pesquisa por ID: Aperte 1\nPesquisa por Setor: Aperte 2\n");
    scanf("%d", &numInput);

    if (numInput == 1) {

        printf("Digite o ID: ");
        scanf("%s", searchInput);

        for (int i = 0; i < sizeArr; i++) {

            if (!strcmp(searchInput, medics[i].id)) {

                printf("\n%s\n%s\n%s\n%s\n", medics[i].name, medics[i].role, medics[i].sector, medics[i].ramal);

            }
        }
    }

    else if (numInput == 2) {

        printf("Digite o Setor: ");
        getchar();
        fgets(searchInput, sizeof(searchInput), stdin);

        for (int i = 0; i < sizeArr; i++) {

            if (!strcmp(searchInput, medics[i].sector)) {

                printf("\n%s\n", medics[i].name);
            }
        }
    }
    
    return 0;
}