#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia, mes, ano;
} data;

char* converte(char c){
    char* retorno;
    retorno = malloc(sizeof(c * 10));
    retorno[0] = c;
    retorno[1] = 'l';
    retorno[2] = 'e';
    retorno[3] = 's';
    retorno[4] = 's';
    retorno[5] = c;
    retorno[6] = '\0';
    return retorno;
}

int* primos(void) {
    int* v;
    v = malloc(3 * sizeof(*v));
    v[0] = 1009;
    v[1] = 1013;
    v[2] = 1019;
    return v;
}

int main()
{
    int valor1 = 10;
    printf("valor 1 esta em %p\n", &valor1);

    int* valor2;
    valor2 = malloc(sizeof(int));
    printf("valor 2 esta em %p\n", valor2);

    data data1;
    data1.dia = 22;
    data1.mes = 9;
    data1.ano = 2020;
    printf("data 1 esta em %p\n", &data1);

    data *data2;
    data2 = malloc(sizeof(data));
    printf("data 2 esta em %p\n", data2);

    char charDeTeste = 'A';

    char* retornoDaFuncao;
    retornoDaFuncao = converte(charDeTeste);
    printf("funcao retornou %s\n", retornoDaFuncao);

    int* tresPrimeirosPrimosMaioresQue1000 = primos();
    printf("o primeiro primo maior que 1000 eh %d\n", tresPrimeirosPrimosMaioresQue1000[0]);
    printf("o segundo primo maior que 1000 eh %d\n", tresPrimeirosPrimosMaioresQue1000[1]);
    printf("o terceiro primo maior que 1000 eh %d\n", tresPrimeirosPrimosMaioresQue1000[2]);

    return 0;
}
