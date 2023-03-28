#include <stdio.h>

#define NUM_PROD 10

typedef enum {
    TV,
    SOM,
    CELULAR
}Produto;

Produto Lista_de_produtos[NUM_PROD];
float Lista_de_precos[NUM_PROD];

int AddProduto(Produto prod, float preco) {
    static int quantidade = 0;

    Lista_de_produtos[quantidade] = prod;
    Lista_de_precos[quantidade] = preco;

    quantidade++;

    return quantidade;
}

void ImprimirLista(int qnt){
    for (int i = 0; i < qnt; i++)
    {
        switch(Lista_de_produtos[i])
        {
            case TV:
            printf("O elemento numero %d, e uma televisao e custa R$ %.2f\n", i, Lista_de_precos[i]);
            break;

            case SOM:
            printf("O elemento numero %d, e um som e custa R$ %.2f\n", i, Lista_de_precos[i]);
            break;

            case CELULAR:
            printf("O elemento numero %d, e um celular e custa R$ %.2f\n", i, Lista_de_precos[i]);
            break;

            default:
            printf("\nProduto nao cadastrado.");
            break;
        }
    }
}

int SolicitaDados(){
    Produto produto_escolhido;
    float preco;
    int qnt;

    printf("Digite o produto desejado: \n");
    printf("Digite 0 para TV.\n");
    printf("Digite 1 para SOM.\n");
    printf("Digite 2 para CELULAR.\n");
    printf("Digite -1 para sair.\n");
    scanf("%d", &produto_escolhido);

    if(produto_escolhido != -1)
    {
        printf("Digite o precodo produto: ");
        scanf("%f", &preco);

        qnt = AddProduto(produto_escolhido, preco);

        return qnt;
    }
    //na hora que ele acha a função, já sai da função, por isso o return qnt dentro do if

    return produto_escolhido;
}

//o ideal é manter a int main no final do código, para ser antes veremos nas próximas aulas
int main(){

    int qnt = 0;
    int cont = 0;
    //exemplo valor ternário
    // 4 > 3    ? printf("ok\n\n\n") :   printf("erro\n\n\n");
    // condição ? <valor se verdadeiro> :   <valor se falso>

    while (qnt >= 0 && qnt < NUM_PROD)
    {
        (SolicitaDados()!= -1) ? (cont++) : (qnt = -1);
    }

    ImprimirLista(cont);

}

