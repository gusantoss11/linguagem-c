// incluir a biblioteca padrão de entrada e saída de dados
#include <stdio.h>
int main(){
    int numero1, numero2;
    int soma, subtrair, multiplicar, dividir, resto;
    printf("digite o primeiro número inteiro e tecle enter: \n");
    scanf("%d", &numero1);

    printf("digite o segundo numero inteiro e tecle enter:\n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtrair = numero1 - numero2;
    multiplicar = numero1 * numero2;
    dividir = numero1 / numero2;
    resto = numero1 % numero2;
    printf("o resultado da soma é %d\n",soma);
    printf("o resultado da subtração é %d\n",subtrair);
    printf("o resultado da multiplicar é %d\n",multiplicar);
    printf("o resultado da divisão é %d\n",dividir);
    printf("o resultado da resto é %d\n",resto);
}
