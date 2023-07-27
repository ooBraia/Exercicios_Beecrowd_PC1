#include <stdio.h>

int main(){
   
    int hora1, min1, hora2, min2, totalh, totalm;
    scanf("%d %d %d %d", &hora1, &min1, &hora2, &min2);
    
    totalh = hora2 - hora1;
    totalm = min2 - min1;
    if(totalh == 0 && totalm < 0 ){
        totalh = 23;
        totalm = 60 + (min2 - min1);
    }
    if(totalh < 0){
        totalh = 24 + (hora2 - hora1);
        if (totalh >= 24){
            totalh = 0;
        }
    }
    if(totalm < 0){
        totalm = 60 + (min2 - min1);
        totalh --;
    }
    if(hora1 == hora2 && min1 == min2){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalh, totalm);
    }
 
    return 0;
}