#include <stdio.h>

int main(){
    
    
    /*checking odd or even number

    printf("enter a number=");
    int a;
    scanf("%d",&a);
    if(a%2==0) printf("given number is even number");
    else printf("the given no. is odd number");*/



    
    /*checking whether the given year is leap year 

    int year;
    printf("enter the year=");
    scanf("%d",&year);
    if(year==1900) printf("this is not leap year");
    else{
        if((year%=4)==0) printf("this is leap year");
        else printf("this is not leap year");
    }*/




    /*print the absolute value of that of interger absolute meaning is 
    to make integer positive

    int n;
    printf("enter a number=");
    scanf("%d",&n);
    if(n<0) n*=-1;
    printf("absolute value of the number is= %d",n);*/
     

    


    /*profit and loss calculation

    float cp,sp,profit,loss,margin;
    printf("enter the cost prize and selling prize of the item=");
    scanf("%f %f",&cp,&sp);
    if(sp>cp){
        profit=(sp-cp)/cp*100;
        margin=sp-cp;
        printf("their is a profit of %f percentage and margin of %f rupee",profit,margin);
    }
    else{
        margin=cp-sp;
        loss=(cp-sp)/cp*100;
        printf("their is a loss of %f percentage and loss of= %f rupee",loss,margin);
    }*/




    /* check whether the area of reactage is greater the its parameter

    float l,b,area, perimeter;
    printf("enter the length and breath of the rectangle=");
    scanf("%f %f",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    if(area>perimeter) printf("the area is grater than perimenter where area is = %f and perimeter is= %f",area,perimeter);
    else printf("the perimeter is grater than area where perimeter is= %f and area is= %f",perimeter,area);*/


    
    

    /*checking whether the given number is true or false

    int n;
    scanf("%d",&n);
    if(n>99 && n<1000) printf("it is three digit number");
    else printf("it is not three digit number");*/




    /* checking the number whether it divisible by 3 or 5

    int n;
    printf("enter the number=");
    scanf("%d",&n);
    if(n%3==0 && n%5!=0) printf("only divisible by 3");
    else if(n%5==0 && n%3 !=0) printf("only divisible by 5");
    else if(n%3==0 && n%5==0) printf("divisible by 3 or 5 both");
    else printf("not divisible by both 3 and 5");*/



    
    /*checking whose age is greater

    int ram,shyam,ajay;
    printf("enter the ages ram shyam and ajay==");
    scanf("%d %d %d",&ram,&shyam,&ajay);
    if(ram>shyam){
        if(ram>ajay) printf("ram is greater than others");
    }
    else{
        if(shyam>ajay) printf("shyam is greater than others");
        else printf("ajay is greater than others");
    }*/
    



    /*use fo ternary operator

    int n=5;
    (n%2==0) ? printf("even number") : printf("odd number");*/

    
    return 0;
}