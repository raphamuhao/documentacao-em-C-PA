#include <stdio.h>
#include <stdlib.h>

#define msg Olá turma de PA;
#define soma 2+2 //onde eu achar soma no código ele vai substituir por 2+2 (n precisa de ;)
//#define soma(a) a+2

int main()
{
float val_float = 1.123456789123456789;
float val_double = 1.123456789123456789;

printf("msg");
printf("Valor double: %f\n", val_double);
printf("Valor float: %f\n", val_float);
//print("%d", soma(5));

return 0;

}
