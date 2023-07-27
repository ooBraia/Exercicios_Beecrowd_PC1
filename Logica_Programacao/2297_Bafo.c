#include <stdio.h>

int main()
{
    int rodadas = 1, contA, contB, virouA, virouB, i, aux = 0;
    scanf("%d", &rodadas);
    
    while(rodadas != 0){ 

        for(i = 0; i < rodadas; i++){
            scanf("%d %d", &contA, &contB);
            virouA += contA;
            virouB += contB;
        }
        aux++;
        if(virouA > virouB){
            printf("Teste %d\n", aux);
            printf("Aldo\n");
            printf("\n");
        }
        else{
            printf("Teste %d\n", aux);
            printf("Beto\n");
            printf("\n");
        }
        contA = 0;
        contB = 0;
        virouA = 0; 
        virouB = 0;
        scanf("%d", &rodadas);
    }
    
    
    return 0;
}
