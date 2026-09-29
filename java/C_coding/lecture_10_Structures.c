# include<stdio.h>
# include <string.h>

/*declaration of structures 

int main(){
    struct book{
        char name[50];
        int pages;
        float price;
    };
    struct book one;
    one.pages=200;
    one.price=439.4;
    printf("enter the name of book : ");
    scanf("%s[^\0]s",&one.name);
    printf("%s",one.name);
    return 0;
}*/



/*structures making and printing elements

int main(){
    struct emp{
        int empid;
        char empname[50];
        int empsalary;
    };

    struct emp emp1;
    emp1.empsalary=45000;
    emp1.empid=1;
    strcpy(emp1.empname,"Ankit prajapati");
    printf("%s %d",emp1.empname,emp1.empsalary);
    return 0;
}*/




/*In structures using typedef and printing elements

int main(){
    typedef struct emp{
        int empid;
        char empname[50];
        int empsalary;
    } emp;

    emp emp1;
    emp1.empsalary=45000;
    emp1.empid=1;
    strcpy(emp1.empname,"Ankit prajapati");
    printf("%s %d",emp1.empname,emp1.empsalary);
    return 0;
}*/




/*Structures with array type having details of pokemon 

int main(){
    typedef struct pokemon{
        char name[50];
        int hp;
        int speed;
        int attack;
        char tier;
    }pokemon;
    pokemon arr[3];
    strcpy(arr[0].name,"Charizard");
    arr[0].attack=80;
    arr[0].hp=100;
    arr[0].speed=60;
    arr[0].tier='A';
    
    strcpy(arr[1].name,"Ankit Prajapati");
    arr[1].attack=40;
    arr[1].hp=90;
    arr[1].speed=30;
    arr[1].tier='B';
    
    strcpy(arr[2].name,"Aman Prajapati");
    arr[2].attack=100;
    arr[2].hp=70;
    arr[2].speed=40;
    arr[2].tier='C';

    for(int i=0;i<3;i++){
        printf("\n");
        printf("NAME :%s\n",arr[i].name);
        printf("HP :%d\n",arr[i].hp);
        printf("SPEED :%d\n",arr[i].speed);
        printf("ATTACK :%d\n",arr[i].attack);
        printf("TIER :%c\n",arr[i].tier);
    }

    return 0;
}*/



/*structure with array with studetn detail take input form user and print it 

int main(){
    typedef struct student{
        int stdid;
        char stdname[50];
        int stdmarks;
    } std;

    int n;
    printf("\nenter the no of student details=");
    scanf("%d",&n);
    //declare a type of structure array
    std arr[n];
    //taking input of student details
    printf("\n");
    for(int i=0;i<n;i++){
        printf("\n");
        printf("enter the detail of %d student",i+1);
        printf("\n");
        printf("enter the student id :");
        scanf("%d",&arr[i].stdid);
        printf("enter the name of student :");
        scanf("%s[^\0]s",&arr[i].stdname);
        printf("enter the student marks :");
        scanf("%d",&arr[i].stdmarks);
    }
    // printing student details
    printf("\n");
    for(int i=0;i<n;i++){
        printf("\n");
        printf("the detail of %d student\n",i+1);
        printf("the student id :%d\n",arr[i].stdid);
        printf("the student name :%s\n",arr[i].stdname);
        printf("the student marks :%d\n",arr[i].stdmarks);
    }
    return 0;
}*/




/*structure cricketer details

int main(){
    typedef struct cricket{
        int age;
        char name[50];
        int matches;
        float ave;
    } cr;
    printf("\n");
    int n;
    printf("enter the no. of cricketers :");
    scanf("%d",&n);
    cr arr[n];
    for(int i=0;i<n;i++){
        printf("\n");
        printf("entert the details of %d cricketer\n",i+1);
        printf("enter the ages : ");
        scanf("%d",&arr[0].age);
        printf("enter the name : ");
        scanf("%s[^\0]s",&arr[i].name);
        printf("enter the no. of matches played : ");
        scanf("%d",&arr[i].matches);
        printf("enter the average : ");
        scanf("%f",&arr[i].ave);
    }
    printf("the details of the student is\n");
    for(int i=0;i<n;i++){
        printf("\n");
        printf("the details of %d player\n",i+1);
        printf("the age of player is : %d\n",arr[i].age);
        printf("the name of player is : %s\n",arr[i].name);
        printf("the matches of player is : %d\n",arr[i].matches);
        printf("the average of player is : %f\n",arr[i].ave);
    }
    return 0;
}*/


