#include <stdio.h>

void ImprimirLista(int* lista, int tamanho)
{
    for(int* i = lista; i <= lista[tamanho-1]; i++ )
    {
        printf("%d\n", *i);
    }
}

int main (int argc, char *argv[])
{
    int lista_de_numer[4] = {10,20,30,40};
//em C, trabalhando com vetores e pede ponteiro ele(ponteiro) sempre pega o endereço do primeiro elemento da minha lista(que é o vetor)

    //printf("%p\n", lista_de_numer);
    //printf("%p\n\n", lista_de_numer[0]);
    //ele vai imprimir o mesmo endereço para vetor 0.

    //no for, como a variavel é inteiro, ao add i++ ele vai considerar 4 espaços de memória na tabela

    // for(int* i = lista_de_numer; i<= lista_de_numer[3]; i++)
    // {
    //     printf("Posicao %p valor %d\n", i, *i);
    // }

}

