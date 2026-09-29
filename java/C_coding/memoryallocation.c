#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int n=3;
    int *arr=(int*) malloc(sizeof(int) *n);
    if(arr==NULL){
        printf("not enough space");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("enter the element :");
        scanf("%d",&arr[i]);
    }
    long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("the sum of the element is =%d",sum);
    return 0;
}