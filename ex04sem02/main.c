#include <stdio.h>
#include <stdlib.h>

typedef enum{
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO,

}Mes;

void ImprimirMes(Mes mes_digitado){
    switch(mes_digitado){
        case JANEIRO:
            printf("Janeiro.");
            break;
        case FEVEREIRO:
            printf("Fevereiro.");
            break;
        case MARCO:
            printf("Março.");
            break;
        case ABRIL:
            printf("Abril.");
            break;
        case MAIO:
            printf("Maio.");
            break;
        case JUNHO:
            printf("Junho.");
            break;
        case JULHO:
            printf("Julho.");
            break;
        case AGOSTO:
            printf("Agosto.");
            break;
        case SETEMBRO:
            printf("Setembro.");
            break;
        case OUTUBRO:
            printf("Outubro.");
            break;
        case NOVEMBRO:
            printf("Novembro.");
            break;
        case DEZEMBRO:
            printf("Dezembro.");
            break;
        default:
            printf("Nao entendi...");
            break;
        
    }
}

int main(){
    int dia, mes, ano;

    printf("Digite uma data para retorno do mes no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    /*é importante notar que o tipo de dado usado para armazenar o mês na variável mes é int. 
    Como você definiu o tipo enumerado Mes com valores que começam em 1, é preciso ter cuidado 
    para que o usuário não digite um valor menor que 1 ou maior que 12. 
    Se isso acontecer, o programa pode imprimir uma mensagem de erro ou comportar-se de forma 
    inesperada.
    Uma forma de tratar isso é verificar o valor digitado antes de chamar a função ImprimirMes().*/
    //ImprimirMes(mes);

    if(mes >= JANEIRO && mes <= DEZEMBRO){
        ImprimirMes(mes);
    }else{
        printf("Mes invalido");
    }

    return 0;
}

