#include<stdio.h>
#include<stdbool.h>

/* create pointer varible and print the element

int main(){
    int a=10;
    int *ptr=&a;
    printf("%d",*ptr);
    return 0;
}*/



/*create pointer variable and print the value of it

int main(){
    char ch;
    char *ptr=&ch;
    printf("enter the character :");
    scanf(" %c",ptr);
    printf("%c",*ptr);
    return 0;
}*/




/*write a program to find min and max between two number with call by refrence

void minmax(int *a,int *b,int *max,int*min){
    if(*a==*b){
        *max=*min=*a;
    }
    else if(*a>*b){
        *max=*a;
        *min=*b;
    }
    else{
        *max=*b;
        *min=*a;
    }
}
int main(){
    int a,b,max=0,min=0;
    printf("enter the first number :");
    scanf("%d",&a);
    printf("enter the second number :");
    scanf("%d",&b);
    minmax(&a,&b,&max,&min);
    printf("the maximum number is %d",max);
    printf("\nthe minimum number is %d",min);
    return 0;
}*/
