#include <stdio.h>
int main(){
    int cp,sp;
    scanf("%d %d", &sp, &cp);
    if(sp>cp){
        printf("Profit");
    }
    else if(cp>sp){
        printf("Loss");
    }
    else{
        printf("No Profit");
    }
    return 0;
}