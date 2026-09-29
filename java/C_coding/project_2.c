#include<stdio.h>
#include<limits.h>
#include<math.h>

double division(double,double);
double modulas(int,int);
void menu();

int main(){
    int choice;
    double num1,num2,result;
    
    while(1){
        menu();
        if(choice==7) break;
        printf("\nenter the operation :");
        scanf("%d",&choice);
        printf("\nenter the first numebr :");
        scanf("%lf",&num1);
        printf("enter the second numebr :");
        scanf("%lf",&num2);
        
        switch(choice){
            case 1:
                result=num1+num2;
                break;
            case 2:
                result=num1-num2;
                break;
            case 3:
                result=num1*num2;
                break;
            case 4:
                result=division(num1,num2);
                break;
            case 5:
                result=modulas(num1,num2);
                break;
            case 6:
                result=pow(num1,num2);
                break;
            default:
                printf("\noperation not matched please enter the correct number");
                break;
        }
        if(!isnan(result)){
            printf("\nThe result of the operation is :%.2f",result);
        }
    }

    return 0;
}

double division(double a,double b){
    if(b==0){
        fprintf(stderr,"zero division error");
        return NAN;
    }
    else{
        return a/b;
    }
}

double modulas(int a,int b){
    if(b==0){
        fprintf(stderr,"Zero division error ");
        return NAN;
    }
    else{
        return a%b;
    }
}

void menu(){
    printf("\n\n-----------------------------------\n\n");
    printf("Welcome to the simple calculator\n"); 
    printf("\nchoose the operation to perform\n");
    //choice section 
    printf("\nEnter 1--Addition");
    printf("\nEnter 2--Substraction");
    printf("\nEnter 3--Multiplication");
    printf("\nEnter 4--Divion");
    printf("\nEnter 5--modulas");
    printf("\nEnter 6--power");
    printf("\nEnter 7--exist\n");
}