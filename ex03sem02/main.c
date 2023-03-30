#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main(){
    float areaCilindro = 0;
    float raio = 30;
    float altura = 1;

    areaCilindro = 2*(PI*raio*altura);
    
  //impressão com mais casas
    printf("duas casas: %.2f\n", areaCilindro);
    printf("dez casas: %.10f\n", areaCilindro);


    return 0;
}
