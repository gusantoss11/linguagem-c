#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int n;
    printf("digite um numero inteiro e tecle enter\n");
    scanf("%d" ,&n); 
    if ( n % 2 == 0){
        printf("o numero que voce digitou é par\n",n);    
    }
    else{
        printf("o numero que voce digitou é impar\n",n);
    }
    return 0;
}