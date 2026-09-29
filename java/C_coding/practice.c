#include<stdio.h>
#include<stdbool.h>
#include<math.h>

void swap(int*,int*);
int main(){
    int a=5;
    int b=10;
    printf("%d and %d",a,b);
    swap(&a,&b);
    printf("\n%d and %d",a,b);
    return 0;
}
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}