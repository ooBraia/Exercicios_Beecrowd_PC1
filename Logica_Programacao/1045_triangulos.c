#include <stdio.h>
#include<math.h>

int main(){
   
    double valores[3], ordem[3];
    int i, aux;
    for(i=0; i<3; i++){
        scanf("%lf", &ordem[i]);
    }
    for(i=0; i<3; i++){
        if(ordem[1] > ordem[0]){
            aux = ordem[0];
            ordem[0] = ordem[1];
            ordem[1] = aux;
        }
        if(ordem[2] > ordem[1]){
            aux = ordem[1];
            ordem[1] = ordem[2];
            ordem[2] = aux;
        }
    }
    
    //A == ordem[0]
    if (ordem[0] >= ordem[2] + ordem[1]){
       printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if(pow(ordem[0],2) == pow(ordem[2],2) + pow(ordem[1],2)){
            printf("TRIANGULO RETANGULO\n");
        }
        if(pow(ordem[0],2) <  pow(ordem[2],2) + pow(ordem[1],2)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        else if (pow(ordem[0],2) > pow(ordem[2],2) + pow(ordem[1],2) ){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (ordem[0] == ordem[1] && ordem[2] == ordem[1]){
        printf("TRIANGULO EQUILATERO\n");
        }
        if(ordem[0] == ordem[1] && ordem[0] != ordem[2] || ordem[0] == ordem[2] && ordem[0] != ordem[1] || ordem[2] == ordem[1] && ordem[2] != ordem[0]){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}