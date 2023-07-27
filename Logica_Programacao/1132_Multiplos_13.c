#include <stdio.h>

int main()
{
    int val1,val2, contador = 0, i;
    scanf("%d %d", &val1, &val2);
    
    if (val1 > val2){
        for(i = val2; i <= val1; i++){
            if((i % 13) != 0){
                contador += i;
            }
        }
    }else{
        for(i = val1; i <= val2; i++){
            if((i % 13) != 0){
                contador += i;
            }
        }
    }
    printf("%d\n", contador);
    

    
    return 0;
}