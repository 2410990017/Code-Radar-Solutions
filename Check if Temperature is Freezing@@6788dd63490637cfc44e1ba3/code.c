#include <stdio.h>

int main(){
    float t;
    scanf("%f", &t);
    if(t<=0){
        printf("Freezing");
    }
    else if(t>0){
        printf("Above Freezing");
    }
    return 0;
}