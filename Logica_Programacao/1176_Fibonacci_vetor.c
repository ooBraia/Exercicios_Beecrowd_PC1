/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    long long int qtd, fib, j;
    scanf("%lld", &qtd);
    
    long long int i, fibo[61];
    fibo[0] = 0;
    fibo[1] = 1;
    
    for(i = 2; i < 61; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    
    for(i = 0; i < qtd; i++){
        scanf("%lld", &fib);
        for(j = 0; j < fib; j++){

        }printf("Fib(%lld) = %lld\n", j, fibo[j] );
    }   

    
    return 0;
}
