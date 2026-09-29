#include<stdio.h>
#include<math.h>

/* fuction to print sum

int main(){
    int a,b;
    printf("enter the number1=");
    scanf("%d",&a);
    printf("enter the number2=");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("the sum is = %d",sum);
    return 0;
}

int add(int a, int b){
    return a+b;
}*/




/* permutation and combination 

int fact(int x){
    int product=1;
    for(int i=1;i<=x;i++){
        product*=i;
    }
    return product;
}
int main(){
    int n,r;
    printf("enter the n=");
    scanf("%d",&n);
    printf("enter the r=");
    scanf("%d",&r);
    int combination= fact(n)/(fact(r)*fact(n-r));
    int permutation= fact(n)/fact(n-r);
    printf("the permutation is= %d\n",permutation);
    printf("the combination is= %d\n",combination);
    return 0;
}*/




/* pascal traiangle 

int fact(int x){
    int product=1;
    for(int i=1;i<=x;i++){
        product*=i;
    }
    return product;
}

int main(){
    int n;
    printf("enter the length of the triangle=");
    scanf("%d",&n);
    int a=0;
    for(int i=1;i<=n;i++){
        int b=0;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            int combination=fact(a)/(fact(b)*fact(a-b));
            printf("%d ",combination);
            b++;
        }
        a++;
        printf("\n");
    }
}*/



/*void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x= *y;
    *y= temp;
    return;
}

int main(){
    int a=1;
    int b=2;
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
    return 0;
}*/




/*int min(int a,int b){
    if(a>b) return b;
    else return a;
}

int gcd(int a,int b){
    int hcf;
    for(int i=1;i<= min(a,b);i++){
        if(a%i==0 && b%i==0) hcf=i;
    }
    return hcf;
}

int main(){
    int a;
    printf("enter the number 1=");
    scanf("%d",&a);
    int b;
    printf("enter the number 2=");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("the hcf of %d and %d is: %d",a,b,hcf);
    return 0;
}*/



/*void fabonacci(int n){
    int a=0,b=1,sum;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return;
}
int main(){
    int n,a=1,b=1;
    printf("enter the name=");
    scanf("%d",&n);
    printf("the fabonacci series= ");
    fabonacci(n);
    return 0;
}*/



