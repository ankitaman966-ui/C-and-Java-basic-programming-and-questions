#include<stdio.h>
#include<math.h>


/* factorial by recursion

int factorial(int n){
    if(n==0||n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d ",fact);
    return 0;
}*/




/*print the number 1 to n

int num(int a,int n){
    if(a>n) return 0;
    else {
        printf("%d ",a);
        return num(a+1,n);
    }
}
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    num(1,n);
    return 0;
}*/




/*print the number 1 to n 

void num(int n){
    if(n==0) return;
    printf("%d ",n);
    num(n-1);
    printf("%d ",n);
    return;
}
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    num(n);
    return 0;
}*/



/* parameter form to print sum

void sum(int n,int x){
    if(n==0){
        printf("%d",x);
        return;
    }
    sum(n-1,x+n);
    return;
}
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}*/


/* to print sum to n non parameter 

int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int s=sum(n);
    printf("the  sum of %d numbers is %d",n,s);
    return 0;
}*/




/* print a to the power b by recursion method

int power(int a,int b){
    if(b==0) return 1;
    int p=a*power(a,b-1);
    return p;
}
int main(){
    int a,b;
    printf("enter the base=");
    scanf("%d",&a);
    printf("enter the power=");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d to the power %d is equal= %d ",a,b,p);
    return 0;
}*/



/*show nth fabonacci series number

int fab(int n){
    if(n==1||n==2) return 1;
    int x=fab(n-1)+fab(n-2);
    return x;
}
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    printf("%d",fab(n));
    return 0;
}*/



/* stair case step 1 2 in sigle time

int stair(int n){
    if(n<=2) return n;
    int x=stair(n-1)+stair(n-2);
    return x;
}
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    printf("the number of ways to reach at top is %d",stair(n));
    return 0;
}*/



/* stair case step 1 2 and 3 in sigle time

int stair(int n){
    if(n<=2) return n;
    if(n==3) return 4;
    int x=stair(n-1)+stair(n-2)+stair(n-3);
    return x;
}
int main(){
    int n;
    printf("enter the number stiar steps =");
    scanf("%d",&n);
    printf("the number of ways to reach at top is %d",stair(n));
    return 0;
}*/



/* to calculate a to the power b 

int power(int a,int b){
    if(b==0) return 1;
    int x=power(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
}
int main(){
    int a,b;
    printf("enter the base=");
    scanf("%d",&a);
    printf("enter the power=");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d to the power %d is equal= %d ",a,b,p);
    return 0;
}*/



/*maze path question
int maze(int cr,int cc,int er,int ec){
    int rightway=0,downway=0;
    if(cr==er&& cc==ec) return 1;
    if(cr==er) rightway+=maze(cr,cc+1,er,ec);
    if(cc==ec) downway+= maze(cr+1,cc,er,ec);
    if(cr<er && cc<ec){
        rightway+=maze(cr,cc+1,er,ec);
        downway+= maze(cr+1,cc,er,ec);
    }
    int totalways=rightway+downway;
    return totalways;
}

int main(){
    int n,m;
    printf("enter total no. of rows=");
    scanf("%d",&n);
    printf("enter toal no. of coloumns=");
    scanf("%d",&m);
    int w=maze(1,1,n,m);
    printf("%d ways to reached at end point",w);
    return 0;
}*/



/* maze without using extra variables using ulta chalu

int maze(int n,int m){
    if(n==1&&m==1) return 1;
    int right=0,down=0;
    if(n==1) right+=maze(n,m-1);
    if(m==1) down+=maze(n-1,m);
    if(n>1&&m>1){
        right+=maze(n,m-1);
        down+=maze(n-1,m);
    }
    return right+down; 
}
int main(){
    int n,m;
    printf("enter total no. of rows=");
    scanf("%d",&n);
    printf("enter toal no. of coloumns=");
    scanf("%d",&m);
    printf("%d",maze(n,m));
    return 0;
}*/



/*zigzag formation patter type

void game(int n){
    if(n==0) return;
    printf("%d ",n);
    game(n-1);
    printf("%d ",n);
    game(n-1);
    printf("%d ",n);
    return;
}
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    game(n);
    return 0;
}*/




/*Tower of honoi problem

void tower(int n, char s, char h, char d){
    if(n==0) return;
    tower(n-1,s,d,h);
    printf("%c -> %c\n",s,d);
    tower(n-1,h,s,d);
    return;
}
int main(){
    int n;
    printf("enter the number of disk=");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}*/












