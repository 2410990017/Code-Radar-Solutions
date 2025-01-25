#include <stdio.h>

int main(){
    char n[100];
    int a;
    char h[100];
    scanf("%99s", &n,&h);
    scanf("%d", &a);
    printf("Name: %s", n);
    printf("Age: %d", a);
    printf("Hobby: %s", h);
    return 0;
}