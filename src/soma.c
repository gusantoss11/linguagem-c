// Este programa pede ao usuários dois números e,
// realizar a soma entre eles e ao final exibe o
// resultado
#include <stdio.h>
int main(){
    //Declarar as variáveis que irão receber
    /// os números digitados pelos usuários
    int numero1;
    int numero2;
    int resultado;
    // vamos pedir ao usuário entrar com o primeiro valor
    printf("digite um: \n");
    //capturando o numero digitado pelo usuario, com 
    //o comando SCANF
    scanf("%d",&numero1);
    printf("Digite outro número inteiro e tecle  enter: \n");
    scanf("%d",&numero2);

    // vamos realiza a soma entre os números 1 e 2
    resultado = numero1 + numero2;
    
    //Apresentar o resultado em tela
    printf("A soma do número %d com o número %d é %d \n ",numero1, numero2, resultado);

    return 0;

}
