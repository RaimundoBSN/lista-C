#include <stdio.h>

void troco(float valorDeTroco){
    int conjuntoMoedas[6]={100,50,25,10,5,1};
    int valortroco = valorDeTroco*100;
    int troco[6];
    int i;
    for(i=0;i<6;i++){
        if(valortroco >= conjuntoMoedas[i]){
            troco[i] = valortroco / conjuntoMoedas[i];


            valortroco -= troco[i] * conjuntoMoedas[i];
        }else{
            troco[i] = 0;
        }
    }

    for(i=0;i<6;i++){

        printf("%d\n",troco[i]);
    }
}


int main(void)
{
    float valordotroco;

    printf("Didite o valor do troco:\n");
    scanf("%f",&valordotroco);

    troco(valordotroco);
   getchar();
   getchar();
   return(0);
}
