#include <stdio.h>
#include <stdlib.h>

#define UCL 1
//#define DEBUG 1

#if UCL == 1

typedef enum{//ele enumera os dados abaixo numa ordem, 0 1 2 3... ou posso definir o numero incial do dado
    ENG_MEC,  //0
    ENG_CIV,  //1
    ENG_AUT,  //2
    DESIGN,  //3
    ADM  //4
}Curso;

void ImprimirCurso(Curso curso_escolhido){
    switch (curso_escolhido)
        {
        case ENG_MEC:
            printf("Engenharia Mecanica.");
            break;
        case ENG_CIV:
            printf("Engenharia Civil.");
            break;
        case ENG_AUT:
            printf("Engenharia Controle e Automacao.");
            break;
        case DESIGN:
            printf("Design.");
            break;
        case ADM:
            printf("Administracao.");
            break;    
        default:
            printf("Curso n cadastrado");
            break;
        }
}

#else

typedef enum{
    BIO,
    DIR,
    PED,
}

void ImprimirCurso(Curso curso_escolhido){
    switch (curso_escolhido)
        {
        case BIO:
            printf("BIOLOGIA.");
            break;
        case DIR:
            printf("DIREITO.");
            break;
        case PED:
            printf("PEDAGOGIA.");
            break; 
        default:
            printf("Curso n cadastrado");
            break;
        }
}

#endif

int main(){

    //Curso curso_escolhido = ENG_CIV;
    //ImprimirCurso(ENG_CIV);

    //return 0;

    #if UCL == 1
        ImprimirCurso(ENG_CIV);
    #else   
        ImprimirCurso(BIO);
    #endif
    //o ifdef é: se definido, executar o que está dentro da compilação 
    #ifdef DEBUG 
        printf("\nTeste");
    #endif
}
