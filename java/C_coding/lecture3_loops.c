#include <stdio.h>
int main(){


    /*Armstrong number

    int n,sum=0;
    printf("enter the number =");
    scanf("%d",&n);
    int m=n;
    while(n>0){
        int rem=n%10;
        sum=sum+rem*rem*rem;
        n/=10;
    }
    if(sum==m) printf("Armstrong number");
    else printf("not a Armstrong number");*/



    /*even number in  between 0-100 
    
    for(int i=2;i<=100;i=i+2){
        printf("%d ",i);
    }*/

    
    /* AP printing
    int n,a=4;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a+=3;
    }*/




    /*make a GP 1 2 4 8 16 32----

    int a,n;
    printf("enter the a and no. of terms to print==");
    scanf("%d %d ", &a ,&n);
    for(int i=1;i<=n;i++){
        printf("%d ", a);
        a*=2;
    }*/




    /*checking composite or prime number

    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1) printf("neither prime nor composite number");
    if(a==0) printf("it is prime number");
    else printf("it is composite number");*/




    
    /*calculating a to the power b

    int a,b,product=1;
    printf("enter the two base and power=");
    scanf("%d %d",&a,&b);
    int power=b;
    while(b!=0){
        product*=a;
        b--;
    }
    printf("%d to the power %d id equal to %d",a,power,product);*/




    /*printing aplbets with their ascii value

    for(int i=65;i<=90;i++){
        char ch=(char)i;
        printf(" %d %c\n",i,ch);
    }*/



    /*display gp 3 12 48-----nth term

    int n;
    int a=3;
    printf("enter how many terms of gp to print=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d  ",a);
        a*=4;
    }*/




    /*count digit and sum of digit

    int n,sum=0,count=0;
    printf("enter the number=");
    scanf("%d",&n);
    while(n>0){
        int rem=n%10;
        count++;
        sum=sum+rem;
        n/=10;
    }
    printf("the no. fo digit=%d and sum fo digit= %d",count,sum);*/




    /* calculate the sum this series 1 -2  3 -4  5 -6-------nth term

    int n,sum=0;
    printf("enter the nth term=");
    scanf("%d",&n);
    if(n%2==0) printf("%d",-n/2);
    else printf("%d",n/2+1);*/

    


    /* print the factorial of the given the number 

    int n,fact=1;
    printf("enter the nth term=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("factorial of %d is=%d",n,fact);*/




    /* print the factorial upto nth term number 

    int n,fact=1;
    printf("enter the nth term=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
        printf("the factorial of %d is=%d\n",i,fact);




    /*printing the fabonacci series 1 1 2 3 5 8 13 21 -------

    int n,a=1,b=1,sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    printf("%d  %d  ",a,b);
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d  ",sum);
    }*/

    return 0;

}