#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int n;
    printf("digite um ano inteiro e tecle enter\n");
    scanf("%d" ,&n); 
    if ( n % 4 == 0){
        printf("o ano %d que voce digitou é bissexto\n",n);    
    }
    else{
        printf("o ano %d que voce digitou nao é bissexto\n",n);
    }
    return 0;
}