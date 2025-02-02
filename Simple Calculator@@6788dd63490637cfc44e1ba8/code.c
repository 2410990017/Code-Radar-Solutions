#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    char op;
    scanf("%c", &op);
    if(op== '+'){
        printf("%d+%d", a+b);
    }
    else if(op== '-'){
        printf("%d-%d", a-b);
    }
    else if(op== '*'){
        printf("%d", a*b);
    }
    else if(op== '/'){
        printf("%d", a/b);
    }
    return 0;
}