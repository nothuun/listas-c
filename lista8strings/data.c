#include <stdio.h>

int main() {

    char data[9];
    int num[8];
    
    //transformando a string em numero: CHAR - '0' subtrai o valor ASCII deixando o valor do numero

    printf("Insira uma data no formato 'ddmmaaaa'\n");
    scanf("%s", data);

    for (int i = 0; i < 8; i++){

        num[i] = data[i] - '0';
    }    

    // O primeiro valor num[0] é multiplicado por 10 por ser uma dezena; O mesmo se aplica quando for centena, milhar...

    int dia = (num[0] * 10) + num[1]; 
    int mes = (num[2] * 10) + num[3];
    int ano = (num[4] * 1000) + (num[5] * 100) + (num[6] * 10) + num[7];
    
    printf("O dia eh %d do mes %d do ano %d", dia, mes, ano);

    return 0;
}