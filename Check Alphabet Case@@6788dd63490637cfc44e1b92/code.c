#include <stdio.h>

int main(){
    char n;
    scanf("%c", &n);
    if(a<=n<=z){
        printf("Lowercasecase");
    }
    else if(A<=n<=Z){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}