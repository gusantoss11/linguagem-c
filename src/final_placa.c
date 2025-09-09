#include <stdio.h>
#include <stdlib.h>

int main(){
    int placa;
    system("clear");
    printf("digite o final da placa do veiculo:\n");
    scanf("%d",&placa);

    if (placa == 1 || placa == 2){
        printf("rodizio na segunda-feira. nao pode circular\n");
    }
    else if (placa == 3 || placa == 4){
        printf("rodizio na terça-feira. nao pode circular\n");    
    }
    else if(placa == 5 || placa == 6){
        printf("rodizio na quarta-feira. não podde circular\n");   
    }
    else if(placa == 7 || placa == 8){
        printf("rodizio na quinta-feira. não pode circular\n");
    }
    else if(placa == 9 || placa == 0){
        printf("rodizio na sexta-feira. nao pode circular\n");
    }
    else{
        printf("final de placa inválido!\n");
    }
    return 0;
    
}