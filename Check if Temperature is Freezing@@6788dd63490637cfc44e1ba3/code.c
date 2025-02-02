#include <stdio.h>

int main(){
    float t;
    scanf("%f", &t);
    if(t<=0){
        printf("Freezing");
    }
    else if(t>0){
        printf("Above Feeezing");
    }
    return 0;
}