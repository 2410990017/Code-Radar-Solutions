#include<stdio.h>
void fseries(int n,int a){
    printf("%d ", a);
    int next=int a+ int b;
    int a=int b;
    int b=int next;
}
int main(){
    int n,a=0,b=1,next;
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid input");
    }
    fseries(n,a);
    return 0;
}