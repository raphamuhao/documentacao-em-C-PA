#include <stdio.h>
#include <stdlib.h>

int Rev(int num)
{
    int reverse = 0;
    while(num > 0)
    {
        reverse = reverse*10;
        reverse = reverse + (num%10);
        num = num/10;
    }

    return reverse;

}

int lerNumero()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    return num;
}

int main(void)
{
    int num1, num2, soma;
    num1 = lerNumero();
    num2 = lerNumero();

    num1 = Rev(num1);
    num2 = Rev(num2);
    soma = num1 + num2;
    
    soma = Rev(soma);
    printf("soma revertida: %d", soma);

}
