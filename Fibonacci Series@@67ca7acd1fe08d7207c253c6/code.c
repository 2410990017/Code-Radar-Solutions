#include<stdio.h>
void fseries(int n,int a, int b, int next){
    printf("%d ", a);
    next=a+b;
    a=b;
    b=next;
}
int main(){
    int n,a=0,b=1,next;
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid input");
    }
    int series=fseries(n,a,b,next);
    printf("%d", series);
    return 0;
}