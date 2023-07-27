#include <stdio.h>

int main()
{
    
    int qtd, contador, contC = 0, contR = 0, contS = 0, i = 0, total = 0;
    char animal;
    float percentualR, percentualS, percentualC;
    
    scanf("%d", &qtd);
    for(i=0; i<qtd; i++){
        scanf("%d %c", &contador, &animal);
        total += contador;

        if(animal == 'C'){
            contC += contador;
        }
        
        if(animal == 'R'){
            contR += contador;
        }
        
        if(animal == 'S'){
            contS += contador;
        }
    }
    percentualC = contC;
    percentualS = contS;
    percentualR = contR;
    
    percentualC = (percentualC / total) * 100;
    percentualS = (percentualS / total) * 100;
    percentualR = (percentualR / total) * 100;
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", contC);
    printf("Total de ratos: %d\n", contR);
    printf("Total de sapos: %d\n", contS);
    printf("Percentual de coelhos: %.2f %%\n", percentualC);
    printf("Percentual de ratos: %.2f %%\n", percentualR);
    printf("Percentual de sapos: %.2f %%\n", percentualS);

    return 0;
}